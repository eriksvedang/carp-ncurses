#include <ncurses.h>

int NCurses_width() {
    int row, col;
    getmaxyx(stdscr, row, col);
    return col;
}

int NCurses_height() {
    int row, col;
    getmaxyx(stdscr, row, col);
    return row;
}
