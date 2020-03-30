#include <sys/io.h>
#include <gfx/video.h>

static int x = 0;
static int y = 0;

void isr1(void)
{
    char keycode;

    keycode = inb(0x60);

    if (keycode >= 0) {
        draw_square(x, y, 10, 10, 0x665566);
        x += 10;
        draw_square(x, y, 10, 10, 0xFFFF00);
    }
}

int main(void)
{
    draw_square(0, 0, 1024, 768, 0x665566);

    while (1) {
    }

    return 0;
}

