//
//  AppDelegate.h
//  PodTesting
//
//  Created by Snyxius on 2/10/17.
//  Copyright © 2017 Snyxius. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

