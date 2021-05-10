//
//  HFSTableViewAdapter.h
//  001---直播架构搭建
//
//  Created by 杨皓博 on 2021/5/10.
//  Copyright © 2021 cooci. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HFSAdapterItemProtocol.h"
#import "HFSEntityItemProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@protocol HFSTableViewAdapterProtocol <NSObject>

- (NSArray *)configTableViewData:(NSObject *)adapterProtocol;

@end

@interface HFSTableViewAdapter : NSObject<HFSAdapterItemProtocol,UITableViewDelegate,UITableViewDataSource>

@property (nonatomic, weak) id <HFSTableViewAdapterProtocol> delegate; 

@end

NS_ASSUME_NONNULL_END
