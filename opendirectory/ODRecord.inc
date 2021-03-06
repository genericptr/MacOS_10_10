{ Parsed from OpenDirectory.framework ODRecord.h }


{$ifdef TYPES}
type
  ODRecordPtr = ^ODRecord;
{$endif}

{$ifdef CLASSES}

type
  ODRecord = objcclass external (NSObject)
  public
    function setNodeCredentials_password_error (inUsername: NSString; inPassword: NSString; outError: NSErrorPtr): boolean; message 'setNodeCredentials:password:error:'; { available in 10_6, NA }
    function setNodeCredentialsWithRecordType_authenticationType_authenticationItems_continueItems_context_error (inRecordType: ODRecordType; inType: ODAuthenticationType; inItems: NSArray; outItems: NSArrayPtr; outContext: idPtr; outError: NSErrorPtr): boolean; message 'setNodeCredentialsWithRecordType:authenticationType:authenticationItems:continueItems:context:error:'; { available in 10_6, NA }
    function setNodeCredentialsUsingKerberosCache_error (inCacheName: NSString; outError: NSErrorPtr): boolean; message 'setNodeCredentialsUsingKerberosCache:error:'; deprecated 'in 10_6, 10_7';
    function passwordPolicyAndReturnError (outError: NSErrorPtr): NSDictionary; message 'passwordPolicyAndReturnError:'; { available in __MAC_10_6, __MAC_10_9, __IPHONE_NA, __IPHONE_NA, "use effectivePoliciesAndReturnError" }
    function verifyPassword_error (inPassword: NSString; outError: NSErrorPtr): boolean; message 'verifyPassword:error:'; { available in 10_6, NA }
    function verifyExtendedWithAuthenticationType_authenticationItems_continueItems_context_error (inType: ODAuthenticationType; inItems: NSArray; outItems: NSArrayPtr; outContext: idPtr; outError: NSErrorPtr): boolean; message 'verifyExtendedWithAuthenticationType:authenticationItems:continueItems:context:error:'; { available in 10_6, NA }
    function changePassword_toPassword_error (oldPassword: NSString; newPassword: NSString; outError: NSErrorPtr): boolean; message 'changePassword:toPassword:error:'; { available in 10_6, NA }
    function synchronizeAndReturnError (outError: NSErrorPtr): boolean; message 'synchronizeAndReturnError:'; { available in 10_6, NA }
    function recordType: NSString; message 'recordType';
    function recordName: NSString; message 'recordName';
    function recordDetailsForAttributes_error (inAttributes: NSArray; outError: NSErrorPtr): NSDictionary; message 'recordDetailsForAttributes:error:'; { available in 10_6, NA }
    function valuesForAttribute_error (inAttribute: ODAttributeType; outError: NSErrorPtr): NSArray; message 'valuesForAttribute:error:'; { available in 10_6, NA }
    function setValue_forAttribute_error (inValueOrValues: id; inAttribute: ODAttributeType; outError: NSErrorPtr): boolean; message 'setValue:forAttribute:error:'; { available in 10_6, NA }
    function removeValuesForAttribute_error (inAttribute: ODAttributeType; outError: NSErrorPtr): boolean; message 'removeValuesForAttribute:error:'; { available in 10_6, NA }
    function addValue_toAttribute_error (inValue: id; inAttribute: ODAttributeType; outError: NSErrorPtr): boolean; message 'addValue:toAttribute:error:'; { available in 10_6, NA }
    function removeValue_fromAttribute_error (inValue: id; inAttribute: ODAttributeType; outError: NSErrorPtr): boolean; message 'removeValue:fromAttribute:error:'; { available in 10_6, NA }
    function deleteRecordAndReturnError (outError: NSErrorPtr): boolean; message 'deleteRecordAndReturnError:'; { available in 10_6, NA }
    function policiesAndReturnError (error: NSErrorPtr): NSDictionary; message 'policiesAndReturnError:'; { available in __MAC_10_9, __MAC_10_10, __IPHONE_NA, __IPHONE_NA, "use accountPoliciesAndReturnError:" }
    function effectivePoliciesAndReturnError (error: NSErrorPtr): NSDictionary; message 'effectivePoliciesAndReturnError:'; { available in __MAC_10_9, __MAC_10_10, __IPHONE_NA, __IPHONE_NA, "use authenticationAllowedAndReturnError: and similar methods" }
    function supportedPoliciesAndReturnError (error: NSErrorPtr): NSDictionary; message 'supportedPoliciesAndReturnError:'; deprecated 'in __MAC_10_9, __MAC_10_10, __IPHONE_NA, __IPHONE_NA';
    function setPolicies_error (policies: NSDictionary; error: NSErrorPtr): boolean; message 'setPolicies:error:'; { available in __MAC_10_9, __MAC_10_10, __IPHONE_NA, __IPHONE_NA, "use setAccountPolicies:error:" }
    function setPolicy_value_error (policy: ODPolicyType; value: id; error: NSErrorPtr): boolean; message 'setPolicy:value:error:'; { available in __MAC_10_9, __MAC_10_10, __IPHONE_NA, __IPHONE_NA, "use addAccountPolicy:toCategory:error:" }
    function removePolicy_error (policy: ODPolicyType; error: NSErrorPtr): boolean; message 'removePolicy:error:'; { available in __MAC_10_9, __MAC_10_10, __IPHONE_NA, __IPHONE_NA, "use removeAccountPolicy:fromCategory:error:" }
    function addAccountPolicy_toCategory_error (policy: NSDictionary; category: ODPolicyCategoryType; error: NSErrorPtr): boolean; message 'addAccountPolicy:toCategory:error:'; { available starting in __MAC_10_10, __IPHONE_NA }
    function removeAccountPolicy_fromCategory_error (policy: NSDictionary; category: ODPolicyCategoryType; error: NSErrorPtr): boolean; message 'removeAccountPolicy:fromCategory:error:'; { available starting in __MAC_10_10, __IPHONE_NA }
    function setAccountPolicies_error (policies: NSDictionary; error: NSErrorPtr): boolean; message 'setAccountPolicies:error:'; { available starting in __MAC_10_10, __IPHONE_NA }
    function accountPoliciesAndReturnError (error: NSErrorPtr): NSDictionary; message 'accountPoliciesAndReturnError:'; { available starting in __MAC_10_10, __IPHONE_NA }
    function authenticationAllowedAndReturnError (error: NSErrorPtr): boolean; message 'authenticationAllowedAndReturnError:'; { available starting in __MAC_10_10, __IPHONE_NA }
    function passwordChangeAllowed_error (newPassword: NSString; error: NSErrorPtr): boolean; message 'passwordChangeAllowed:error:'; { available starting in __MAC_10_10, __IPHONE_NA }
    function willPasswordExpire (willExpireIn: cuint64): boolean; message 'willPasswordExpire:'; { available starting in __MAC_10_10, __IPHONE_NA }
    function willAuthenticationsExpire (willExpireIn: cuint64): boolean; message 'willAuthenticationsExpire:'; { available starting in __MAC_10_10, __IPHONE_NA }
    function secondsUntilPasswordExpires: cint64; message 'secondsUntilPasswordExpires';
    function secondsUntilAuthenticationsExpire: cint64; message 'secondsUntilAuthenticationsExpire';
  end;


type
  ODRecordGroupExtensions = objccategory external (ODRecord)
    function addMemberRecord_error (inRecord: ODRecord; outError: NSErrorPtr): boolean; message 'addMemberRecord:error:'; { available in 10_6, NA }
    function removeMemberRecord_error (inRecord: ODRecord; outError: NSErrorPtr): boolean; message 'removeMemberRecord:error:'; { available in 10_6, NA }
    function isMemberRecord_error (inRecord: ODRecord; outError: NSErrorPtr): boolean; message 'isMemberRecord:error:'; { available in 10_6, NA }
  end;
{$endif}

