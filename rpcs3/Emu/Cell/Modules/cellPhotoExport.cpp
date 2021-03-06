#include "stdafx.h"
#include "Emu/Cell/PPUModule.h"

LOG_CHANNEL(cellPhotoExport);

// Return Codes
enum
{
	CELL_PHOTO_EXPORT_UTIL_RET_OK             = 0,
	CELL_PHOTO_EXPORT_UTIL_RET_CANCEL         = 1,
	CELL_PHOTO_EXPORT_UTIL_ERROR_BUSY         = 0x8002c201,
	CELL_PHOTO_EXPORT_UTIL_ERROR_INTERNAL     = 0x8002c202,
	CELL_PHOTO_EXPORT_UTIL_ERROR_PARAM        = 0x8002c203,
	CELL_PHOTO_EXPORT_UTIL_ERROR_ACCESS_ERROR = 0x8002c204,
	CELL_PHOTO_EXPORT_UTIL_ERROR_DB_INTERNAL  = 0x8002c205,
	CELL_PHOTO_EXPORT_UTIL_ERROR_DB_REGIST    = 0x8002c206,
	CELL_PHOTO_EXPORT_UTIL_ERROR_SET_META     = 0x8002c207,
	CELL_PHOTO_EXPORT_UTIL_ERROR_FLUSH_META   = 0x8002c208,
	CELL_PHOTO_EXPORT_UTIL_ERROR_MOVE         = 0x8002c209,
	CELL_PHOTO_EXPORT_UTIL_ERROR_INITIALIZE   = 0x8002c20a,
};

s32 cellPhotoInitialize()
{
	UNIMPLEMENTED_FUNC(cellPhotoExport);
	return CELL_OK;
}

s32 cellPhotoFinalize()
{
	UNIMPLEMENTED_FUNC(cellPhotoExport);
	return CELL_OK;
}

s32 cellPhotoRegistFromFile()
{
	UNIMPLEMENTED_FUNC(cellPhotoExport);
	return CELL_OK;
}

s32 cellPhotoExportInitialize()
{
	UNIMPLEMENTED_FUNC(cellPhotoExport);
	return CELL_OK;
}

s32 cellPhotoExportInitialize2()
{
	UNIMPLEMENTED_FUNC(cellPhotoExport);
	return CELL_OK;
}

s32 cellPhotoExportFinalize()
{
	UNIMPLEMENTED_FUNC(cellPhotoExport);
	return CELL_OK;
}

s32 cellPhotoExportFromFile()
{
	UNIMPLEMENTED_FUNC(cellPhotoExport);
	return CELL_OK;
}

s32 cellPhotoExportFromFileWithCopy()
{
	UNIMPLEMENTED_FUNC(cellPhotoExport);
	return CELL_OK;
}

s32 cellPhotoExportProgress()
{
	UNIMPLEMENTED_FUNC(cellPhotoExport);
	return CELL_OK;
}

DECLARE(ppu_module_manager::cellPhotoExport)("cellPhotoUtility", []()
{
	REG_FUNC(cellPhotoUtility, cellPhotoInitialize);
	REG_FUNC(cellPhotoUtility, cellPhotoFinalize);
	REG_FUNC(cellPhotoUtility, cellPhotoRegistFromFile);
	REG_FUNC(cellPhotoUtility, cellPhotoExportInitialize);
	REG_FUNC(cellPhotoUtility, cellPhotoExportInitialize2);
	REG_FUNC(cellPhotoUtility, cellPhotoExportFinalize);
	REG_FUNC(cellPhotoUtility, cellPhotoExportFromFile);
	REG_FUNC(cellPhotoUtility, cellPhotoExportFromFileWithCopy);
	REG_FUNC(cellPhotoUtility, cellPhotoExportProgress);
});
