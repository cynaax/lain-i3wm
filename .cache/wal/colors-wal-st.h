const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#100908", /* black   */
  [1] = "#546B88", /* red     */
  [2] = "#DE6588", /* green   */
  [3] = "#5EE1BE", /* yellow  */
  [4] = "#C0A29E", /* blue    */
  [5] = "#ECCFB0", /* magenta */
  [6] = "#DFD5D3", /* cyan    */
  [7] = "#f3e8df", /* white   */

  /* 8 bright colors */
  [8]  = "#aaa29c",  /* black   */
  [9]  = "#546B88",  /* red     */
  [10] = "#DE6588", /* green   */
  [11] = "#5EE1BE", /* yellow  */
  [12] = "#C0A29E", /* blue    */
  [13] = "#ECCFB0", /* magenta */
  [14] = "#DFD5D3", /* cyan    */
  [15] = "#f3e8df", /* white   */

  /* special colors */
  [256] = "#100908", /* background */
  [257] = "#f3e8df", /* foreground */
  [258] = "#f3e8df",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
