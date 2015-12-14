//
//  MapViewController.h
//  MapData
//
//  Created by 酒井紀明 on 2015/12/12.
//  Copyright © 2015年 noriaki.sakai. All rights reserved.
//

#import "ViewController.h"
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

@interface MapViewController : ViewController

@property (assign, nonatomic) BOOL isLocation;

// 現在位置記録用
@property (assign, nonatomic) CLLocationDegrees longitude;
@property (assign, nonatomic) CLLocationDegrees latitude;

@end
