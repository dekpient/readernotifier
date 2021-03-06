// Copyright (C) 2010 Mike Godenzi, Claudio Marforio
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.

//
//  Keychain.h
//  Google Reader
//
//  Created by Troels Bay on 2006-11-14.
//


@interface Keychain : NSObject {

}

+ (BOOL)checkForExistanceOfKeychain;
+ (BOOL)deleteKeychainItem;
+ (BOOL)modifyKeychainItem:(NSString *)newPassword;
+ (BOOL)addKeychainItem:(NSString *)password;
+ (NSString *)getPassword;
+ (NSString *)getUsernameFromSecKeychainItemRef:(SecKeychainItemRef)item;
+ (NSString *)getPasswordFromSecKeychainItemRef:(SecKeychainItemRef)item;


@end
