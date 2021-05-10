//
//  HFSAdapterItemProtocol.h
//  001---直播架构搭建
//
//  Created by 杨皓博 on 2021/5/10.
//  Copyright © 2021 cooci. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HFSEntityItemProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@protocol HFSAdapterItemProtocol <NSObject>


@required
@property (nonatomic, strong) NSIndexPath *hfs_IndexPath;

- (Class)hfs_AdapterClass;

- (void)hfsAdapterItem:(id)adapterModel;

@optional

- (void)didselectEntityElement:(NSObject<HFSAdapterItemProtocol> *)eneityElement;

- (void)sendMessage:(NSObject <HFSAdapterItemProtocol> *)Target model:(id)model;

- (void)receiveMessage:(NSObject <HFSAdapterItemProtocol> *)Target model:(id)Model;

- (NSObject<HFSEntityItemProtocol> *)findNeedEntityElement:(NSObject<HFSAdapterItemProtocol> *)adapterItem;

@end

NS_ASSUME_NONNULL_END
