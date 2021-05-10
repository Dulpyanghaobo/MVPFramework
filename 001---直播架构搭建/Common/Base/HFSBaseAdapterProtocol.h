//
//  HFSBaseAdapterProtocol.h
//  001---直播架构搭建
//
//  Created by 杨皓博 on 2021/5/10.
//  Copyright © 2021 cooci. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HFSAdapterItemProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@protocol HFSBaseAdapterProtocol <NSObject>

@required

- (void)sendSignalToTargetAdapterItem:(NSObject<HFSAdapterItemProtocol> *)adapterItem sendAdapterItem:(NSObject<HFSAdapterItemProtocol> *)adapterItem model:(id)model;

@optional

- (void)addAdapterItem:(NSObject<HFSAdapterItemProtocol> *)adapterItem;

- (void)removeAdapterItem:(NSObject<HFSAdapterItemProtocol> *)adapterItem;

- (void)getAllAdapters:(NSObject<HFSAdapterItemProtocol> *)adapterItems;

@end



NS_ASSUME_NONNULL_END
