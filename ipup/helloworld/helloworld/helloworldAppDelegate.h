//
//  helloworldAppDelegate.h
//  helloworld
//
//  Created by Joel BERNHARD on 25/10/11.
//  Copyright 2011 Amcor Packaging. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface helloworldAppDelegate : NSObject <UIApplicationDelegate>{
    
    IBOutlet UILabel *testfield;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
