//
//  HFSBaseEntity.h
//  001---直播架构搭建
//
//  Created by 杨皓博 on 2021/5/11.
//  Copyright © 2021 cooci. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol HFSBaseEntityDelegate <NSObject>

- (void)getSpecialData:(id)data;

@end

@interface HFSBaseEntity : NSObject

@property (nonatomic, weak) id <HFSBaseEntityDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
