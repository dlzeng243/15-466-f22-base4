#include <ft2build.h>
#include FT_FREETYPE_H

#include <hb.h>
#include <hb-ft.h>

#include <iostream>

#define FONT_SIZE 36
#define MARGIN (FONT_SIZE * .5)

//This file exists to check that programs that use freetype / harfbuzz link properly in this base code.
//You probably shouldn't be looking here to learn to use either library.

int main(int argc, char **argv) {
	FT_Library library;
	FT_Init_FreeType( &library );

	hb_buffer_t *buf = hb_buffer_create();
	hb_buffer_destroy(buf);

	std::cout << "It worked?" << std::endl;
	// code from hello-harfbuzz tutorial
}
