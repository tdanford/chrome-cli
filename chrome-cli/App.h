//
//  App.h
//  chrome-cli
//
//  Created by Petter Rasmussen on 08/02/14.
//  Copyright (c) 2014 Petter Rasmussen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Arguments.h"

@interface App : NSObject

- (void)listWindows:(Arguments *)args;
- (void)listTabs:(Arguments *)args;
- (void)listTabsInWindow:(Arguments *)args;
- (void)printActiveTabInfo:(Arguments *)args;
- (void)printAllTabInfo:(Arguments *)args;
- (void)printTabInfo:(Arguments *)args;
- (void)openUrlInNewTab:(Arguments *)args;
- (void)openUrlInNewWindow:(Arguments *)args;
- (void)openUrlInTab:(Arguments *)args;
- (void)openUrlInWindow:(Arguments *)args;
- (void)reloadActiveTab:(Arguments *)args;
- (void)reloadTab:(Arguments *)args;
- (void)closeActiveTab:(Arguments *)args;
- (void)closeTab:(Arguments *)args;
- (void)closeActiveWindow:(Arguments *)args;
- (void)closeWindow:(Arguments *)args;
- (void)goBackActiveTab:(Arguments *)args;
- (void)goBackInTab:(Arguments *)args;
- (void)goForwardActiveTab:(Arguments *)args;
- (void)goForwardInTab:(Arguments *)args;
- (void)executeJavascriptInActiveTab:(Arguments *)args;
- (void)executeJavascriptInTab:(Arguments *)args;
- (void)printSourceFromActiveTab:(Arguments *)args;
- (void)printSourceFromTab:(Arguments *)args;
- (void)printChromeVersion:(Arguments *)args;

@end
