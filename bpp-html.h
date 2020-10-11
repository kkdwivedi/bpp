#pragma once

#define BEGIN_HTML <!DOCTYPE html> <html lang="en"> <meta charset=utf-8>
#define FONT(str) <font face=%%str%%>
#define BEGIN_HEAD <head>
#define DEFAULT_STYLE <style type=text/css>body{margin:40px auto;max-width:700px;text-align:justify;line-height:1.6; \
  font-size:16px;color:#444;padding:0 10px}h1,h2,h3{line-height:1.2} </style> <style> .kdiv { border: 2px outset black; \
  text-align: center; } </style>
#define TITLE(str) <title>@@str@@</title>
#define END_HEAD </head>
#define BEGIN_BODY <body>
#define HEADING1(str) <h1>@@str@@</h1>
#define HEADING2(str) <h2>@@str@@</h2>
#define HEADING3(str) <h3>@@str@@</h3>
#define HEADING4(str) <h4>@@str@@</h4>
#define HEADING5(str) <h5>@@str@@</h5>
#define HEADING6(str) <h6>@@str@@</h6>
#define BEGIN_PARA <p>
#define PARA(str) <p>@@str@@</p>
#define BOLD(str) <b>@@str@@</b>
#define ITALICS(str) <i>@@str@@</i>
#define UNDERLINE(str) <u>@@str@@</u>
#define LINK(text, link) <a href=%%link%%>text</a>
#define MARQUEE(str) <marquee>@@str@@</marquee>
#define ABBR(str, abb) <abbr title=%%str%%>abb</abbr>
#define END_PARA </p>
#define BEGIN_LIST <ul>
#define LIST_ITEM(str) <li>@@str@@</li>
#define END_LIST </ul>
#define BEGIN_NOTE <div class="kdiv">
#define END_NOTE </div>
#define BEGIN_DROP_DOWN(str) <details><summary>@@str@@</summary>
#define END_DROP_DOWN </details>
#define BEGIN_CENTER <center>
#define END_CENTER </center>
#define DIALOG(str) <dialog open>%%str%%</dialog>
#define END_BODY </body>
#define END_HTML </html>
