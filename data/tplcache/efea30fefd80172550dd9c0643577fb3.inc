[field:global runphp='yes' name=autoindex]
                    $a="
                    <li class='col-4-1 last not-animated' data-animate='fadeInUp' >";
                      $b="
                    
                    <li class='col-4-1 not-animated' data-animate='fadeInUp'>";
                      if ((@me%4)==0 && @me!=12)  @me=$a;
                      else  @me=$b;
                      [/field:global]
                      <div class="product-item">
                        <div class="portfolio-img"><a href="[field:arcurl/]" target="_blank"><img src="[field:picname/]" alt="[field:title/]" /></a></div>
                        <div class="portfolio-title">
                          <h2><a href="[field:arcurl/]" target="_blank">[field:title/]</a></h2>
                        </div>
                        <div class="portfolio-text"></div>
                        <div class="price"><strong>￥<span>[field:jiage /]</span></strong></div>
                      </div>
                    </li>