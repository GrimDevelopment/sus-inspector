//
//  SIMainWindowController.h
//  SUS Inspector
//
//  Created by Juutilainen Hannes on 5.3.2013.
//  Copyright (c) 2013 Hannes Juutilainen. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//


#import <Cocoa/Cocoa.h>

@class SIProgressWindowController;
@class SIProductsViewController;
@class SICatalogsViewController;
@class SIReposadoConfigurationController;
@class SIToolbarItem;

@interface SIMainWindowController : NSWindowController <NSSplitViewDelegate, NSToolbarDelegate>

@property (retain) SIProgressWindowController *progressWindowController;
@property (retain) SIProductsViewController *productsViewController;
@property (retain) SICatalogsViewController *catalogsViewController;
@property (retain) SIReposadoConfigurationController *reposadoConfigurationController;
@property (assign) IBOutlet NSView *leftView;
@property (assign) IBOutlet NSView *rightView;
@property (assign) IBOutlet NSSplitView *mainSplitView;

- (void)showProgressPanel;
- (void)showProgressPanelAttachedToWindow:(NSWindow *)aWindow;
- (void)hideProgressPanel;
- (BOOL)validateToolbarItem:(SIToolbarItem *)item;

- (IBAction)focusToSearchFieldAction:(id)sender;
- (IBAction)getInfoAction:(id)sender;
- (IBAction)reposyncAction:(id)sender;
- (IBAction)createPkginfoAction:(id)sender;
- (IBAction)sendToMunkiAdminAction:(id)sender;

@end
