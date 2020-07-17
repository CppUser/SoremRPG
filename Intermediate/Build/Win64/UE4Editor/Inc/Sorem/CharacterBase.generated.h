// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOREM_CharacterBase_generated_h
#error "CharacterBase.generated.h already included, missing '#pragma once' in CharacterBase.h"
#endif
#define SOREM_CharacterBase_generated_h

#define Sorem_Source_Sorem_Public_CharacterBase_h_12_SPARSE_DATA
#define Sorem_Source_Sorem_Public_CharacterBase_h_12_RPC_WRAPPERS
#define Sorem_Source_Sorem_Public_CharacterBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Sorem_Source_Sorem_Public_CharacterBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sorem"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase)


#define Sorem_Source_Sorem_Public_CharacterBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sorem"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase)


#define Sorem_Source_Sorem_Public_CharacterBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public:


#define Sorem_Source_Sorem_Public_CharacterBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterBase)


#define Sorem_Source_Sorem_Public_CharacterBase_h_12_PRIVATE_PROPERTY_OFFSET
#define Sorem_Source_Sorem_Public_CharacterBase_h_9_PROLOG
#define Sorem_Source_Sorem_Public_CharacterBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sorem_Source_Sorem_Public_CharacterBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Sorem_Source_Sorem_Public_CharacterBase_h_12_SPARSE_DATA \
	Sorem_Source_Sorem_Public_CharacterBase_h_12_RPC_WRAPPERS \
	Sorem_Source_Sorem_Public_CharacterBase_h_12_INCLASS \
	Sorem_Source_Sorem_Public_CharacterBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sorem_Source_Sorem_Public_CharacterBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sorem_Source_Sorem_Public_CharacterBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Sorem_Source_Sorem_Public_CharacterBase_h_12_SPARSE_DATA \
	Sorem_Source_Sorem_Public_CharacterBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Sorem_Source_Sorem_Public_CharacterBase_h_12_INCLASS_NO_PURE_DECLS \
	Sorem_Source_Sorem_Public_CharacterBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOREM_API UClass* StaticClass<class ACharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sorem_Source_Sorem_Public_CharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
