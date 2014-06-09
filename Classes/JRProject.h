//
//  JRProject.h
//
//  Created by Jan-Yves on 28/01/14.
//  Copyright (c) 2014 Jan-Yves Ruzicka. All rights reserved.
//

#import "JROFObject.h"
@class OmniFocusProject;

@interface JRProject : JROFObject {
    NSString *_name, *_id;
    NSDate *_creationDate, *_completionDate;
    BOOL _completed;
    
    NSMutableArray *_tasks;
}

@property (atomic,readonly) OmniFocusProject *project;

#pragma mark Initializer
-(id)initWithProject:(OmniFocusProject *)project parent:(JROFObject *)parent;
+(id)projectWithProject:(OmniFocusProject *)project parent:(JROFObject *)parent;

#pragma mark Getters
-(NSMutableArray *)tasks;

#pragma mark Properties
-(NSDate *)creationDate;
-(NSDate *)completionDate;
-(BOOL)completed;
@end