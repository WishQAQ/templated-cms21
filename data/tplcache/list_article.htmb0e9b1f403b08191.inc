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
$z[6]=Array("list","\r\n                    [field:global runphp='yes' name=autoindex]\r\n                    \$a=\"\r\n                    <li class='col-4-1 last not-animated' data-animate='fadeInUp' >\";\r\n                      \$b=\"\r\n                    \r\n                    <li class='col-4-1 not-animated' data-animate='fadeInUp'>\";\r\n                      if ((@me%4)==0 && @me!=12)  @me=\$a;\r\n                      else  @me=\$b;\r\n                      [/field:global]\r\n                      <div class=\"product-item\">\r\n                        <div class=\"portfolio-img\"><a href=\"[field:arcurl/]\" target=\"_blank\"><img src=\"[field:picname/]\" alt=\"[field:title/]\" /></a></div>\r\n                        <div class=\"portfolio-title\">\r\n                          <h2><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></h2>\r\n                        </div>\r\n                        <div class=\"portfolio-text\"></div>\r\n                        <div class=\"price\"><strong>￥<span>[field:jiage /]</span></strong></div>\r\n                      </div>\r\n                    </li>\r\n                    ",3368,4508);
$z[6][4]['pagesize']="8";
$z[6][4]['addfields']="jiage";
$z[6][4]['channelid']="1";
$z[7]=Array("pagelist","",4722,4788);
$z[7][4]['listitem']="index,end,pre,next,pageno";
$z[7][4]['listsize']="2";
$z[8]=Array("include","",5127,5164);
$z[8][4]['filename']="footer.htm";

?>