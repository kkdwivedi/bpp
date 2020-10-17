#pragma once

#include <bpp-html.h>

#define header(str...) div("www_title", str)
#define layout(str...) table("100%", 0, 10, row(str))
#define left_sidebar(width, str...) column(center, top, width, str)
#define left_sidebar_entry(title, str...) b(title) div("www_sidebar", str)
#define right_pane(str...) column(left, top, 100%, table("95%", 0, 0, row(str)))
#define content(width, title, str...) column(left, top, width, div("www_sectiontitle", title) div("www_text", str))
#define right_sidebar(width, str...) column(left, top, 1%, ) column(left, top, width, str)
#define right_sidebar_entry(title, str...) div("www_sectiontitle", title) div("www_text", str)
