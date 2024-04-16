#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
191,
199,
200,
201,
202,
203,
204,
205,
207,
208,
255,
256,
257,
281,
282,
283,
294,
295,
296,
297,
414,
415,
416,
419,
450,
451,
453,
455,
457,
459,
464,
472,
473,
474,
475,
476,
477,
478,
479,
480,
560,
561,
613,
619,
622,
624,
629,
630,
632,
633,
637,
638,
640,
642,
643,
646,
647,
648,
651,
654,
656,
658,
667,
726,
728,
730,
740,
741,
742,
744,
750,
751,
752,
753,
754,
762,
763,
764,
768,
769,
771,
773,
956,
1107,
1108,
6539,
6540,
6542,
6543,
6544,
6545,
6546,
6548,
6550,
6552,
6560,
6562,
6567,
6569,
6571,
6573,
6624,
6625,
6627,
6628,
6629,
6630,
6631,
6633,
6635,
7504,
7508,
7510,
7511,
7512,
7513,
7707,
7708,
7709,
7710,
7726,
7727,
7728,
7730,
7771,
7830,
7832,
7841,
7842,
7843,
7844,
8218,
8222,
8223,
8249,
8266,
8273,
8280,
8291,
8294,
8314,
8385,
8387,
8396,
8398,
8399,
8406,
8420,
8440,
8441,
8449,
8451,
8458,
8459,
8462,
8464,
8469,
8475,
8476,
8483,
8485,
8497,
8500,
8501,
8502,
8513,
8522,
8528,
8529,
8530,
8532,
8533,
8550,
8552,
8566,
8583,
8610,
8635,
8636,
9053,
9136,
9137,
9281,
9282,
9286,
9289,
9351,
9707,
9708,
9924,
9934,
10476,
10497,
10499,
10501,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 191,
ves_icall_System_Array_InternalCreate,
// token 199,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 200,
ves_icall_System_Array_CanChangePrimitive,
// token 201,
ves_icall_System_Array_FastCopy,
// token 202,
ves_icall_System_Array_GetLengthInternal_raw,
// token 203,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 204,
ves_icall_System_Array_GetGenericValue_icall,
// token 205,
ves_icall_System_Array_GetValueImpl_raw,
// token 207,
ves_icall_System_Array_SetValueImpl_raw,
// token 208,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 255,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 256,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 257,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 281,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 282,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 283,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 294,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 295,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 296,
ves_icall_System_Enum_InternalGetCorElementType,
// token 297,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 414,
ves_icall_System_Environment_get_ProcessorCount,
// token 415,
ves_icall_System_Environment_get_TickCount,
// token 416,
ves_icall_System_Environment_get_TickCount64,
// token 419,
ves_icall_System_Environment_FailFast_raw,
// token 450,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 451,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 453,
ves_icall_System_GC_SuppressFinalize_raw,
// token 455,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 457,
ves_icall_System_GC_GetGCMemoryInfo,
// token 459,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 464,
ves_icall_System_Object_MemberwiseClone_raw,
// token 472,
ves_icall_System_Math_Ceiling,
// token 473,
ves_icall_System_Math_Cos,
// token 474,
ves_icall_System_Math_Floor,
// token 475,
ves_icall_System_Math_Log10,
// token 476,
ves_icall_System_Math_Pow,
// token 477,
ves_icall_System_Math_Sin,
// token 478,
ves_icall_System_Math_Sqrt,
// token 479,
ves_icall_System_Math_Tan,
// token 480,
ves_icall_System_Math_ModF,
// token 560,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 561,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 613,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 619,
ves_icall_RuntimeType_make_array_type_raw,
// token 622,
ves_icall_RuntimeType_make_byref_type_raw,
// token 624,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 629,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 630,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 632,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 633,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 637,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 638,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 640,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 642,
ves_icall_System_RuntimeType_getFullName_raw,
// token 643,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 646,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 647,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 648,
ves_icall_RuntimeType_GetFields_native_raw,
// token 651,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 654,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 656,
ves_icall_RuntimeType_GetName_raw,
// token 658,
ves_icall_RuntimeType_GetNamespace_raw,
// token 667,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 726,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 728,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 730,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 740,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 741,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 742,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 744,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 750,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 751,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 752,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 753,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 754,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 762,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 763,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 764,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 768,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 769,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 771,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 773,
ves_icall_System_String_FastAllocateString_raw,
// token 956,
ves_icall_System_Type_internal_from_handle_raw,
// token 1107,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1108,
ves_icall_System_ValueType_Equals_raw,
// token 6539,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6540,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6542,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6543,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6544,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6545,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6546,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6548,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6550,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6552,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6560,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6562,
mono_monitor_exit_icall_raw,
// token 6567,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6569,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6571,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6573,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6624,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6625,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6627,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6628,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6629,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6630,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6631,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6633,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6635,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7504,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7508,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7510,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7511,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7512,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7513,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7707,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7708,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7709,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7710,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7726,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7727,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7728,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7730,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 7771,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7830,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 7832,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 7841,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7842,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7843,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 7844,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8218,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8222,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8223,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8249,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8266,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8273,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8280,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8291,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8294,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8314,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8385,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8387,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8396,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8398,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8399,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8406,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8420,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8440,
ves_icall_reflection_get_token_raw,
// token 8441,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8449,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8451,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8458,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8459,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8462,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8464,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8469,
ves_icall_reflection_get_token_raw,
// token 8475,
ves_icall_get_method_info_raw,
// token 8476,
ves_icall_get_method_attributes,
// token 8483,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8485,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8497,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8500,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8501,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8502,
ves_icall_reflection_get_token_raw,
// token 8513,
ves_icall_InternalInvoke_raw,
// token 8522,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8528,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8529,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8530,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8532,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8533,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8550,
ves_icall_InvokeClassConstructor_raw,
// token 8552,
ves_icall_InternalInvoke_raw,
// token 8566,
ves_icall_reflection_get_token_raw,
// token 8583,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8610,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8635,
ves_icall_reflection_get_token_raw,
// token 8636,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9053,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9136,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9137,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9281,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9282,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9286,
ves_icall_ModuleBuilder_getToken_raw,
// token 9289,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9351,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 9707,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 9708,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9924,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 9934,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 10476,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10497,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10499,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10501,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
