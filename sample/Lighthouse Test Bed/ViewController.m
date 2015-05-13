//
//  ViewController.m
//  Lighthouse Test Bed
//
//  Created by Ivan Bruel on 20/03/15.
//  Copyright (c) 2015 Passworks. All rights reserved.
//

#import "ViewController.h"

#import <Lighthouse/Lighthouse.h>

@interface ViewController () <LHDelegate>


@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [Lighthouse sharedInstance].delegate = self;
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"Anonymous" style:UIBarButtonItemStylePlain target:self action:@selector(anonymousIdentify:)];
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"Identified" style:UIBarButtonItemStylePlain target:self action:@selector(identify:)];
    // Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)anonymousIdentify:(id)sender
{
    [[Lighthouse sharedInstance] identifyUser];
}

- (IBAction)identify:(id)sender
{
    NSArray *names = @[@"João", @"Luís", @"David", @"Mariana"];
    [[Lighthouse sharedInstance] identifyUser:names[arc4random_uniform(4)] attributes:@{@"age": @40, @"gender": @"muito_homem"}];
}

#pragma mark - LHDelegate
// LHDelegate Protocol implementation, Lighthouse has all these methods to control the flow of beacons and events.
- (void)lighthouseBeaconsRefreshed:(NSArray *)beacons
{
    [self.tableView reloadData];
}

- (void)lighthouseEventTriggered:(LHEvent *)event onBeacon:(LHBeacon *)beacon
{
    [self.tableView reloadData];
}

- (void)lighthouseBeaconDidChangeProximity:(LHBeacon *)beacon
{
    [self.tableView reloadData];
}

- (BOOL)lighthouseShouldTriggerEvent:(LHEvent *)event onBeacon:(LHBeacon *)beacon
{
    return YES;
}

#pragma mark - UITableView Delegate
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 2;
}

- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section
{
    if (section == 0)
        return @"Beacons";
    else
        return @"Events";
    
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    if (section == 0)
        return [Lighthouse sharedInstance].beacons.count;
    else
        return [Lighthouse sharedInstance].events.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"reuseIdentifier" forIndexPath:indexPath];
    if (indexPath.section == 0) {
        LHBeacon *beacon = [Lighthouse sharedInstance].beacons[indexPath.row];
        cell.textLabel.text = beacon.name;
        cell.detailTextLabel.text = [[self class] proximityStringFromProximity:beacon.proximity];
    } else {
        LHEvent *event = [Lighthouse sharedInstance].events[indexPath.row];
        cell.textLabel.text = event.name;
        cell.detailTextLabel.text = [[self class] typeStringFromType:event.type];
    }
    
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
}

#pragma mark - String conversions
+ (NSString *)proximityStringFromProximity:(CLProximity)proximity
{
    NSArray *proximityOptions = @[@"Unknown",
                                  @"Immediate",
                                  @"Near",
                                  @"Far"];
    return proximityOptions[proximity];
}

+ (NSString *)typeStringFromType:(LHEventType)type
{
    NSArray *typeOptions = @[@"URL",
                             @"Notification",
                             @"WebHook",
                             @"Image",
                             @"Passbook"];
    return typeOptions[type];
}

@end
