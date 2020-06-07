//
//  RoverPhoto.h
//  Astronomy
//
//  Created by Nicolas Rios on 6/6/20.
//  Copyright © 2020 Nicolas Rios. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RoverPhoto : NSObject


@property (nonatomic, readonly) NSNumber *photoID;
@property (nonatomic, readonly) int sol;
@property (nonatomic, readonly) NSURL *photoURL;
@property (nonatomic, readonly) NSString *cameraName;
@property (nonatomic, readonly) NSDate *earthDate;
@property (nonatomic, readonly) NSArray<RoverPhoto *> *roverPhotos;

- (instancetype)initWithPhotoID:(NSNumber *)photoID
                            sol:(int)sol
                       photoURL:(NSURL *)photoURL
                     cameraName:(NSString *)cameraName
                      earthDate:(NSDate *)earthDate;

- (instancetype)initWithRoverPhotos:(NSArray<RoverPhoto *> *)roverPhotos;
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;


@end

NS_ASSUME_NONNULL_END
