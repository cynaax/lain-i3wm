const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0f0c0d", /* black   */
  [1] = "#694756", /* red     */
  [2] = "#705064", /* green   */
  [3] = "#865F73", /* yellow  */
  [4] = "#7A6292", /* blue    */
  [5] = "#907297", /* magenta */
  [6] = "#A68AB4", /* cyan    */
  [7] = "#d0c3da", /* white   */

  /* 8 bright colors */
  [8]  = "#918898",  /* black   */
  [9]  = "#694756",  /* red     */
  [10] = "#705064", /* green   */
  [11] = "#865F73", /* yellow  */
  [12] = "#7A6292", /* blue    */
  [13] = "#907297", /* magenta */
  [14] = "#A68AB4", /* cyan    */
  [15] = "#d0c3da", /* white   */

  /* special colors */
  [256] = "#0f0c0d", /* background */
  [257] = "#d0c3da", /* foreground */
  [258] = "#d0c3da",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
