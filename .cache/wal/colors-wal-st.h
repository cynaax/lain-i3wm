const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#101010", /* black   */
  [1] = "#AE4630", /* red     */
  [2] = "#8B807F", /* green   */
  [3] = "#929292", /* yellow  */
  [4] = "#9E9F9F", /* blue    */
  [5] = "#B0B0B0", /* magenta */
  [6] = "#B9C1C2", /* cyan    */
  [7] = "#d9d9d9", /* white   */

  /* 8 bright colors */
  [8]  = "#979797",  /* black   */
  [9]  = "#AE4630",  /* red     */
  [10] = "#8B807F", /* green   */
  [11] = "#929292", /* yellow  */
  [12] = "#9E9F9F", /* blue    */
  [13] = "#B0B0B0", /* magenta */
  [14] = "#B9C1C2", /* cyan    */
  [15] = "#d9d9d9", /* white   */

  /* special colors */
  [256] = "#101010", /* background */
  [257] = "#d9d9d9", /* foreground */
  [258] = "#d9d9d9",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
