   /*******************************************************/
   /*      "C" Language Integrated Production System      */
   /*                                                     */
   /*               CLIPS Version 6.24  06/05/06          */
   /*                                                     */
   /*                                                     */
   /*******************************************************/

/*************************************************************/
/* Purpose:                                                  */
/*                                                           */
/* Principal Programmer(s):                                  */
/*      Brian L. Dantes                                      */
/*                                                           */
/* Contributing Programmer(s):                               */
/*                                                           */
/* Revision History:                                         */
/*      6.23: Corrected compilation errors for files         */
/*            generated by constructs-to-c. DR0861           */
/*                                                           */
/*      6.24: Renamed BOOLEAN macro type to intBool.         */
/*                                                           */
/*************************************************************/

#ifndef _H_genrccom
#define _H_genrccom

#define EnvGetDefgenericName(theEnv,x) GetConstructNameString((struct constructHeader *) x)
#define EnvGetDefgenericPPForm(theEnv,x) GetConstructPPForm(theEnv,(struct constructHeader *) x)

#define SetNextDefgeneric(g,t) SetNextConstruct((struct constructHeader *) g, \
                                                (struct constructHeader *) t)
#define GetDefgenericNamePointer(x) GetConstructNamePointer((struct constructHeader *) x)
#define SetDefgenericPPForm(g,ppf) SetConstructPPForm(theEnv,(struct constructHeader *) g,ppf)

#define EnvDefgenericModule(theEnv,x) GetConstructModuleName((struct constructHeader *) x)

#ifndef _H_constrct
#include "constrct.h"
#endif
#ifndef _H_cstrccom
#include "cstrccom.h"
#endif
#ifndef _H_evaluatn
#include "evaluatn.h"
#endif
#ifndef _H_moduldef
#include "moduldef.h"
#endif
#ifndef _H_genrcfun
#include "genrcfun.h"
#endif
#ifndef _H_symbol
#include "symbol.h"
#endif

#ifdef LOCALE
#undef LOCALE
#endif

#ifdef _GENRCCOM_SOURCE_
#define LOCALE
#else
#define LOCALE extern
#endif

#define DefgenericModule(x) GetConstructModuleName((struct constructHeader *) x)
#define FindDefgeneric(a) EnvFindDefgeneric(GetCurrentEnvironment(),a)
#define GetDefgenericList(a,b) EnvGetDefgenericList(GetCurrentEnvironment(),a,b)
#define GetDefgenericName(x) GetConstructNameString((struct constructHeader *) x)
#define GetDefgenericPPForm(x) GetConstructPPForm(GetCurrentEnvironment(),(struct constructHeader *) x)
#define GetDefgenericWatch(a) EnvGetDefgenericWatch(GetCurrentEnvironment(),a)
#define GetNextDefgeneric(a) EnvGetNextDefgeneric(GetCurrentEnvironment(),a)
#define IsDefgenericDeletable(a) EnvIsDefgenericDeletable(GetCurrentEnvironment(),a)
#define ListDefgenerics(a,b) EnvListDefgenerics(GetCurrentEnvironment(),a,b)
#define SetDefgenericWatch(a,b) EnvSetDefgenericWatch(GetCurrentEnvironment(),a,b)
#define Undefgeneric(a) EnvUndefgeneric(GetCurrentEnvironment(),a)
#define GetDefmethodDescription(a,b,c,d) EnvGetDefmethodDescription(GetCurrentEnvironment(),a,b,c,d)
#define GetDefmethodList(a,b) EnvGetDefmethodList(GetCurrentEnvironment(),a,b)
#define GetDefmethodPPForm(a,b) EnvGetDefmethodPPForm(GetCurrentEnvironment(),a,b)
#define GetDefmethodWatch(a,b) EnvGetDefmethodWatch(GetCurrentEnvironment(),a,b)
#define GetMethodRestrictions(a,b,c) EnvGetMethodRestrictions(GetCurrentEnvironment(),a,b,c)
#define GetNextDefmethod(a,b) EnvGetNextDefmethod(GetCurrentEnvironment(),a,b)
#define IsDefmethodDeletable(a,b) EnvIsDefmethodDeletable(GetCurrentEnvironment(),a,b)
#define ListDefmethods(a,b) EnvListDefmethods(GetCurrentEnvironment(),a,b)
#define SetDefmethodWatch(a,b,c) EnvSetDefmethodWatch(GetCurrentEnvironment(),a,b,c)
#define Undefmethod(a,b) EnvUndefmethod(GetCurrentEnvironment(),a,b)

LOCALE void SetupGenericFunctions(void *);
LOCALE void *EnvFindDefgeneric(void *,char *);
LOCALE DEFGENERIC *LookupDefgenericByMdlOrScope(void *,char *);
LOCALE DEFGENERIC *LookupDefgenericInScope(void *,char *);
LOCALE void *EnvGetNextDefgeneric(void *,void *);
LOCALE long EnvGetNextDefmethod(void *,void *,long);
LOCALE int EnvIsDefgenericDeletable(void *,void *);
LOCALE int EnvIsDefmethodDeletable(void *,void *,long);
LOCALE void UndefgenericCommand(void *);
LOCALE void *GetDefgenericModuleCommand(void *);
LOCALE void UndefmethodCommand(void *);
LOCALE DEFMETHOD *GetDefmethodPointer(void *,long);

LOCALE intBool EnvUndefgeneric(void *,void *);
LOCALE intBool EnvUndefmethod(void *,void *,long);

#if ! OBJECT_SYSTEM
LOCALE void TypeCommand(void *,DATA_OBJECT *);
#endif

#if DEBUGGING_FUNCTIONS
LOCALE void EnvGetDefmethodDescription(void *,char *,int,void *,long);
LOCALE unsigned EnvGetDefgenericWatch(void *,void *);
LOCALE void EnvSetDefgenericWatch(void *,unsigned,void *);
LOCALE unsigned EnvGetDefmethodWatch(void *,void *,long);
LOCALE void EnvSetDefmethodWatch(void *,unsigned,void *,long);
LOCALE void PPDefgenericCommand(void *);
LOCALE void PPDefmethodCommand(void *);
LOCALE void ListDefmethodsCommand(void *);
LOCALE char *EnvGetDefmethodPPForm(void *,void *,long);
LOCALE void ListDefgenericsCommand(void *);
LOCALE void EnvListDefgenerics(void *,char *,struct defmodule *);
LOCALE void EnvListDefmethods(void *,char *,void *);
#endif

LOCALE void GetDefgenericListFunction(void *,DATA_OBJECT *);
globle void EnvGetDefgenericList(void *,DATA_OBJECT *,struct defmodule *);
LOCALE void GetDefmethodListCommand(void *,DATA_OBJECT *);
LOCALE void EnvGetDefmethodList(void *,void *,DATA_OBJECT *);
LOCALE void GetMethodRestrictionsCommand(void *,DATA_OBJECT *);
LOCALE void EnvGetMethodRestrictions(void *,void *,long,DATA_OBJECT *);

#endif




