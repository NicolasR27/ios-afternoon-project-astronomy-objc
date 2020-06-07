//
//  PhotoController.h
//  Astronomy
//
//  Created by Nicolas Rios on 6/6/20.
//  Copyright © 2020 Nicolas Rios. All rights reserved.
//

#import <Foundation/Foundation.h>


@class PhotoManifest;
@class SolPhoto;
@class RoverPhoto;

@interface PhotoController : NSObject

@property (nonatomic, readonly, nonnull) NSString *marsRover;
@property (nonatomic, readonly, nonnull) NSArray<RoverPhoto *> *roverPhotos;

- (void)fetchPhotoManifest:(NSString *_Nonnull)roverName completionHandler:(void (^_Nullable)(PhotoManifest *_Nullable photoManifest, NSError *_Nullable error))completionHandler;

//- (void)fetchSolPhotoData:(NSString *_Nonnull)roverName :(int)sol completionHandler:(void (^_Nullable)(SolPhoto *_Nullable solPhotos, NSError *_Nullable error))completionHandler;

- (void)fetchRoverPhotos:(NSString *_Nonnull)roverName :(int)sol completionHandler:(void (^_Nullable)(RoverPhoto *_Nullable roverPhotos, NSError *_Nullable error))completionHandler;

- (instancetype _Nonnull)initWithMarsRover:(NSString *_Nonnull)marsRover;
- (instancetype _Nonnull)initWithRoverPhotos:(NSArray<RoverPhoto *> *_Nullable)roverPhotos;

@end
