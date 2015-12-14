//
//  CustomAnnotation.h
//  MapData
//
//  Created by 酒井紀明 on 2015/12/12.
//  Copyright © 2015年 noriaki.sakai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface CustomAnnotation : MKAnnotationView <MKAnnotation, NSCoding>

@property (nonatomic, assign) CLLocationCoordinate2D coordinate;

@property (nonatomic, copy) NSString* title;
@property (nonatomic, copy) NSString* subtitle;

- (id) initWithCoordinate:(CLLocationCoordinate2D) coordinate;

- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;

@end
