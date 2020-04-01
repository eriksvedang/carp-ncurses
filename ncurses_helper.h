#include <ncurses.h>

// We need to register a separate type for attributes, as several functions need
// to use pointers to attributes.
// In Carp, the pointer type Ptr takes an argument; if the value of this
// argument begins with a lowercase letter, it will be interpreted as a type
// parameter instead of a concrete type, so, we need to pass it a type that
// begins with a capital letter.
typedef attr_t Attribute;
// The comments above likewise apply to chtype and short, both of which are used
// throughout ncurses; for convenience we define counterparts that play well
// with Carp's compiler here.
typedef chtype Chtype;
typedef short Short;

Attribute *NCurses_attr_ptr() {
  Attribute* attributes;
  return attributes;
}

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
