//
//  SolPhoto.m
//  Astronomy
//
//  Created by Nicolas Rios on 6/6/20.
//  Copyright © 2020 Nicolas Rios. All rights reserved.
//

#import "SolPhoto.h"

@implementation SolPhoto


-(instancetype)initWithSol:(int)sol totalPhotos:(int)total_photos {
    if (self = [self init]) {
        _sol = sol;
        _total_photos = total_photos;
    }
    return self;
}

-(instancetype)initWithSols:(NSArray<SolPhoto *> *)solPhotos {
    if (self = [super init]) {
        _solPhotos = solPhotos;
    }
    return self;
}

-(instancetype)initWithDictionary:(NSDictionary *)dictionary {
    NSArray *solPhotos = dictionary[@"photos"];
    NSMutableArray *solPhotosArray = [[NSMutableArray alloc] init];
    
    for (NSDictionary *solDictionary in solPhotos) {
        NSNumber *sol = solDictionary[@"sol"];
        NSNumber *total_photos = solDictionary[@"total_photos"];
        
        if ([sol isKindOfClass:[NSNull class]]) {
            sol = nil;
        }
        if ([total_photos isKindOfClass:[NSNull class]]) {
            total_photos = nil;
        }
        
        SolPhoto *newSol = [[SolPhoto alloc] initWithSol:sol.intValue totalPhotos:total_photos.intValue];
        
        [solPhotosArray addObject:newSol];
    }
    self = [self initWithSols:solPhotosArray];
    return self;
}

@end


