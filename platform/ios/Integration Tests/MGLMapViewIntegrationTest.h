//
//  MGLMapViewIntegrationTest.h
//  ios
//
//  Created by Julian Rex on 4/5/18.
//  Copyright © 2018 Mapbox. All rights reserved.
//

#import <XCTest/XCTest.h>
#import <Mapbox/Mapbox.h>

@interface MGLMapViewIntegrationTest : XCTestCase <MGLMapViewDelegate>
@property (nonatomic) MGLMapView *mapView;
@property (nonatomic) MGLStyle *style;
@property (nonatomic) void (^regionDidChange)(MGLMapView *mapView, BOOL animated);

// Utility methods
- (void)waitForMapViewToFinishLoadingStyleWithTimeout:(NSTimeInterval)timeout;
- (void)waitForMapViewToBeRenderedWithTimeout:(NSTimeInterval)timeout;
@end
