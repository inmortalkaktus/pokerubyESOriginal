Route110_TrickHousePuzzle4_MapBorder:: @ 82EED60
	.incbin "data/layouts/Route110_TrickHousePuzzle4/border.bin"

Route110_TrickHousePuzzle4_MapBlockdata:: @ 82EED68
	.incbin "data/layouts/Route110_TrickHousePuzzle4/map.bin"

	.align 2
Route110_TrickHousePuzzle4_Layout:: @ 82EEFFC
	.4byte 0xf
	.4byte 0x16
	.4byte Route110_TrickHousePuzzle4_MapBorder
	.4byte Route110_TrickHousePuzzle4_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_TrickHousePuzzle
