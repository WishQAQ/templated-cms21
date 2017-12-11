<?php
$z[0]=Array("field","",115,134);
$z[0][4]['name']="title";
$z[1]=Array("global","",135,161);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",202,231);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",271,329);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",2401,2436);
$z[4][4]['filename']="head.htm";
$z[5]=Array("include","",2714,2748);
$z[5][4]['filename']="top.htm";
$z[6]=Array("list"," \r\n                  <!-- S entry-item -->\r\n                  <div class=\"entry-item\">\r\n                    <div class=\"time\">\r\n                      <p class=\"time-day\">[field:pubdate function=\"MyDate('d',@me)\"/]</p>\r\n                      <p class=\"time-date\">[field:pubdate function=\"MyDate('Y-m',@me)\"/]</p>\r\n                    </div>\r\n                    <div class=\"entry-title\">\r\n                      <h2><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></h2>\r\n                    </div>\r\n                    <div class=\"entry-summary\">\r\n                      <div class=\"qhd-content\">\r\n                        <p> [field:description function=\"cn_substr(@me,320)\"/]...</p>\r\n                      </div>\r\n                    </div>\r\n                  </div>\r\n                  <!-- E entry-item --> \r\n                  ",3286,4161);
$z[6][4]['pagesize']="5";
$z[7]=Array("pagelist","",4329,4395);
$z[7][4]['listitem']="index,end,pre,next,pageno";
$z[7][4]['listsize']="2";
$z[8]=Array("include","",4734,4771);
$z[8][4]['filename']="footer.htm";

?>