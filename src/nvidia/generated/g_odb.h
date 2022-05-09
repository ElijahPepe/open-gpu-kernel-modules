// This file is automatically generated by rmconfig - DO NOT EDIT!
//
// Profile:  shipping-gpus-openrm
// Template: templates/gt_odb.h
//

#ifndef _G_ODB_H_
#define _G_ODB_H_

#define OBJECT_BASE_DEFINITION(ENG) __##ENG##_OBJECT_BASE_DEFINITION

#ifndef __NVOC_CLASS_OBJGPIO_TYPEDEF__
#define __NVOC_CLASS_OBJGPIO_TYPEDEF__
typedef struct OBJGPIO OBJGPIO;
#endif /* __NVOC_CLASS_OBJGPIO_TYPEDEF__ */
typedef struct OBJGPIO *POBJGPIO;

#ifndef __NVOC_CLASS_OBJOS_TYPEDEF__
#define __NVOC_CLASS_OBJOS_TYPEDEF__
typedef struct OBJOS OBJOS;
#endif /* __NVOC_CLASS_OBJOS_TYPEDEF__ */
typedef struct OBJOS *POBJOS;

#ifndef __NVOC_CLASS_OBJRPC_TYPEDEF__
#define __NVOC_CLASS_OBJRPC_TYPEDEF__
typedef struct OBJRPC OBJRPC;
#endif /* __NVOC_CLASS_OBJRPC_TYPEDEF__ */
typedef struct OBJRPC *POBJRPC;

#ifndef __NVOC_CLASS_OBJRPCSTRUCTURECOPY_TYPEDEF__
#define __NVOC_CLASS_OBJRPCSTRUCTURECOPY_TYPEDEF__
typedef struct OBJRPCSTRUCTURECOPY OBJRPCSTRUCTURECOPY;
#endif /* __NVOC_CLASS_OBJRPCSTRUCTURECOPY_TYPEDEF__ */
typedef struct OBJRPCSTRUCTURECOPY *POBJRPCSTRUCTURECOPY;



#if NV_PRINTF_STRINGS_ALLOWED
#define odbGetClassName(p) (objGetClassInfo((p))->name)
#endif

// TODO : temporary hack, to delete
#ifndef __NVOC_CLASS_OBJGPU_TYPEDEF__
#define __NVOC_CLASS_OBJGPU_TYPEDEF__
typedef struct OBJGPU OBJGPU;
#endif /* __NVOC_CLASS_OBJGPU_TYPEDEF__ */
typedef struct OBJGPU *POBJGPU;

#ifndef __NVOC_CLASS_OBJDISP_TYPEDEF__
#define __NVOC_CLASS_OBJDISP_TYPEDEF__
typedef struct OBJDISP OBJDISP;
#endif /* __NVOC_CLASS_OBJDISP_TYPEDEF__ */
typedef struct OBJDISP *POBJDISP;

//
// #define staticCast(pObj, TYPE) ((pObj)? __staticCast_##TYPE((pObj)) : NULL)
//
#define __staticCast_OBJGPIO(pObj) ((pObj)->__iom_pbase_OBJGPIO)
#define __staticCast_OBJOS(pObj) ((pObj)->__iom_pbase_OBJOS)
#define __staticCast_OBJRPC(pObj) ((pObj)->__iom_pbase_OBJRPC)
#define __staticCast_OBJRPCSTRUCTURECOPY(pObj) ((pObj)->__iom_pbase_OBJRPCSTRUCTURECOPY)


//
// #define dynamicCast(pObj, TYPE) (__dynamicCast_##TYPE((pObj)))
//
#define __dynamicCast_OBJGPIO(pObj) NULL
#define __dynamicCast_OBJOS(pObj) ((POBJOS)__nvoc_dynamicCast(staticCast((pObj), Dynamic), classInfo(OBJOS)))
#define __dynamicCast_OBJRPC(pObj) ((POBJRPC)__nvoc_dynamicCast(staticCast((pObj), Dynamic), classInfo(OBJRPC)))
#define __dynamicCast_OBJRPCSTRUCTURECOPY(pObj) NULL



#define PDB_PROP_GPIO_DCB_ENTRIES_PARSED_BASE_CAST 
#define PDB_PROP_GPIO_DCB_ENTRIES_PARSED_BASE_NAME pdb.PDB_PROP_GPIO_DCB_ENTRIES_PARSED

#define PDB_PROP_GPIO_ENTRY_ORIGIN_DCB_GAT_BASE_CAST 
#define PDB_PROP_GPIO_ENTRY_ORIGIN_DCB_GAT_BASE_NAME pdb.PDB_PROP_GPIO_ENTRY_ORIGIN_DCB_GAT

#define PDB_PROP_GPIO_EPC_HWSLOW_FC7E081B_BASE_CAST 
#define PDB_PROP_GPIO_EPC_HWSLOW_FC7E081B_BASE_NAME pdb.PDB_PROP_GPIO_EPC_HWSLOW_FC7E081B

#define PDB_PROP_GPIO_FORCE_FAST_LVDS_MUX_SWITCH_BASE_CAST 
#define PDB_PROP_GPIO_FORCE_FAST_LVDS_MUX_SWITCH_BASE_NAME pdb.PDB_PROP_GPIO_FORCE_FAST_LVDS_MUX_SWITCH

#define PDB_PROP_GPIO_IS_MISSING_BASE_CAST __nvoc_pbase_OBJENGSTATE->
#define PDB_PROP_GPIO_IS_MISSING_BASE_NAME PDB_PROP_ENGSTATE_IS_MISSING

#define PDB_PROP_GPIO_RM_PMU_GPIO_SYNC_ENABLED_DEF_BASE_CAST 
#define PDB_PROP_GPIO_RM_PMU_GPIO_SYNC_ENABLED_DEF_BASE_NAME pdb.PDB_PROP_GPIO_RM_PMU_GPIO_SYNC_ENABLED_DEF

#define PDB_PROP_OS_CACHED_MEMORY_MAPPINGS_FOR_ACPI_TABLE_BASE_CAST 
#define PDB_PROP_OS_CACHED_MEMORY_MAPPINGS_FOR_ACPI_TABLE_BASE_NAME pdb.PDB_PROP_OS_CACHED_MEMORY_MAPPINGS_FOR_ACPI_TABLE

#define PDB_PROP_OS_DOES_NOT_ALLOW_DIRECT_PCIE_MAPPINGS_BASE_CAST 
#define PDB_PROP_OS_DOES_NOT_ALLOW_DIRECT_PCIE_MAPPINGS_BASE_NAME pdb.PDB_PROP_OS_DOES_NOT_ALLOW_DIRECT_PCIE_MAPPINGS

#define PDB_PROP_OS_GET_ACPI_TABLE_FROM_UEFI_BASE_CAST 
#define PDB_PROP_OS_GET_ACPI_TABLE_FROM_UEFI_BASE_NAME pdb.PDB_PROP_OS_GET_ACPI_TABLE_FROM_UEFI

#define PDB_PROP_OS_LIMIT_GPU_RESET_BASE_CAST 
#define PDB_PROP_OS_LIMIT_GPU_RESET_BASE_NAME pdb.PDB_PROP_OS_LIMIT_GPU_RESET

#define PDB_PROP_OS_NO_PAGED_SEGMENT_ACCESS_BASE_CAST 
#define PDB_PROP_OS_NO_PAGED_SEGMENT_ACCESS_BASE_NAME pdb.PDB_PROP_OS_NO_PAGED_SEGMENT_ACCESS

#define PDB_PROP_OS_ONDEMAND_VBLANK_CONTROL_ENABLE_DEFAULT_BASE_CAST 
#define PDB_PROP_OS_ONDEMAND_VBLANK_CONTROL_ENABLE_DEFAULT_BASE_NAME pdb.PDB_PROP_OS_ONDEMAND_VBLANK_CONTROL_ENABLE_DEFAULT

#define PDB_PROP_OS_PAT_UNSUPPORTED_BASE_CAST 
#define PDB_PROP_OS_PAT_UNSUPPORTED_BASE_NAME pdb.PDB_PROP_OS_PAT_UNSUPPORTED

#define PDB_PROP_OS_SLI_ALLOWED_BASE_CAST 
#define PDB_PROP_OS_SLI_ALLOWED_BASE_NAME pdb.PDB_PROP_OS_SLI_ALLOWED

#define PDB_PROP_OS_SUPPORTS_DISPLAY_REMAPPER_BASE_CAST 
#define PDB_PROP_OS_SUPPORTS_DISPLAY_REMAPPER_BASE_NAME pdb.PDB_PROP_OS_SUPPORTS_DISPLAY_REMAPPER

#define PDB_PROP_OS_SUPPORTS_TDR_BASE_CAST 
#define PDB_PROP_OS_SUPPORTS_TDR_BASE_NAME pdb.PDB_PROP_OS_SUPPORTS_TDR

#define PDB_PROP_OS_SYSTEM_EVENTS_SUPPORTED_BASE_CAST 
#define PDB_PROP_OS_SYSTEM_EVENTS_SUPPORTED_BASE_NAME pdb.PDB_PROP_OS_SYSTEM_EVENTS_SUPPORTED

#define PDB_PROP_OS_UNCACHED_MEMORY_MAPPINGS_NOT_SUPPORTED_BASE_CAST 
#define PDB_PROP_OS_UNCACHED_MEMORY_MAPPINGS_NOT_SUPPORTED_BASE_NAME pdb.PDB_PROP_OS_UNCACHED_MEMORY_MAPPINGS_NOT_SUPPORTED

#define PDB_PROP_OS_WAIT_FOR_ACPI_SUBSYSTEM_BASE_CAST 
#define PDB_PROP_OS_WAIT_FOR_ACPI_SUBSYSTEM_BASE_NAME pdb.PDB_PROP_OS_WAIT_FOR_ACPI_SUBSYSTEM



#endif  // _G_ODB_H_