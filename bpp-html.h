#pragma once

#define html(str...) \
<!DOCTYPE html> <html lang="en"> <meta charset=utf-8>str</html>
#define font(str...) <font face=@@str@@>
#define head(str...) <head>str</head>
#define stylesheet(str) <link rel="stylesheet" href=str type="text/css">
#define style(str...)                                    \
  <style type = text / css> body {                       \
  margin:                                                \
    40px auto;                                           \
    max - width : 700px;                                 \
    text - align : justify;                              \
    line - height : 1.6;                                 \
    font - size : 16px;                                  \
  padding:                                               \
    0 10px                                               \
  }                                                      \
  h1, h2, h3{line - height : 1.2}</ style><style>.kdiv { \
  border:                                                \
    2px outset black;                                    \
    text - align : center;                               \
  }                                                      \
</style>
#define title(str...) <title>str</title>
#define body(str...) <body>str</body>
#define break <br>
#define div(cls, str...) <div class=cls>str</div>
#define h1(str...) <h1>str</h1>
#define h2(str...) <h2>str</h2>
#define h3(str...) <h3>str</h3>
#define h4(str...) <h4>str</h4>
#define h5(str...) <h5>str</h5>
#define h6(str...) <h6>str</h6>
#define p(str...) <p>str</p>
#define b(str...) <b>str</b>
#define i(str...) <i>str</i>
#define u(str...) <u>str</u>
#define link(link, text...) <a href=link>text</a>
#define marquee(str...) <marquee>str</marquee>
#define abbr(str, abb...) <abbr title=@@str@@>abb</abbr>
#define ul(str...) <ul>str</ul>
#define ol(str...) <ol>str</ol>
#define li(str...) <li>str</li>
#define note(str...) <div class="kdiv">str</div>
#define drop_down_summary(str...) <summary>str</summary>
#define drop_down(text...) <details>text</details>
#define center(str...) <center>str</center>
#define dialog(str...) <dialog open>@@str@@</dialog>
#define table(widt, bord, cellp, str...) \
<table width=widt border=bord cellpadding=cellp>str</table>
#define row(str...) <tr>str</tr>
#define column(alig, valig, widt, str...) \
<td align=alig valign=valig style=@@width:widt@@>str</td>
#define image(widt, heigh, name, text) \
<img src=name alt=@@text@@, width=@@widt@@, height=@@heigh@@>
