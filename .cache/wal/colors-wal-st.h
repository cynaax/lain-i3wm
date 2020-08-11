const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#11100e", /* black   */
  [1] = "#8AA473", /* red     */
  [2] = "#607985", /* green   */
  [3] = "#719994", /* yellow  */
  [4] = "#91B197", /* blue    */
  [5] = "#AACDA6", /* magenta */
  [6] = "#B3D5CA", /* cyan    */
  [7] = "#e0ece6", /* white   */

  /* 8 bright colors */
  [8]  = "#9ca5a1",  /* black   */
  [9]  = "#8AA473",  /* red     */
  [10] = "#607985", /* green   */
  [11] = "#719994", /* yellow  */
  [12] = "#91B197", /* blue    */
  [13] = "#AACDA6", /* magenta */
  [14] = "#B3D5CA", /* cyan    */
  [15] = "#e0ece6", /* white   */

  /* special colors */
  [256] = "#11100e", /* background */
  [257] = "#e0ece6", /* foreground */
  [258] = "#e0ece6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
