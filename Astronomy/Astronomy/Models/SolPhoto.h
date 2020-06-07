//
//  SolPhoto.h
//  Astronomy
//
//  Created by Nicolas Rios on 6/6/20.
//  Copyright © 2020 Nicolas Rios. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SolPhoto : NSObject

@property (nonatomic, readonly) int sol;
@property (nonatomic, readonly) int total_photos;
@property (nonatomic, readonly) NSArray<SolPhoto *> *solPhotos;

- (instancetype)initWithSol:(int)sol
                totalPhotos:(int)total_photos;

- (instancetype)initWithSols:(NSArray<SolPhoto *> *)solPhotos;
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
