//
//  Photo.h
//  FoodScrap
//
//  Created by Kathy Tang on 4/18/13.
//  Copyright (c) 2013 Kathy Tang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Restaurant;

@interface Photo : NSManagedObject

@property (nonatomic, retain) NSNumber * longitude;
@property (nonatomic, retain) NSNumber * latitude;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * review;
@property (nonatomic, retain) NSString * pictureURL;
@property (nonatomic, retain) Restaurant *restaurant;

@end
