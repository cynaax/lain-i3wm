const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#030912", /* black   */
  [1] = "#195D9E", /* red     */
  [2] = "#19629A", /* green   */
  [3] = "#21649A", /* yellow  */
  [4] = "#1B75B6", /* blue    */
  [5] = "#2175B5", /* magenta */
  [6] = "#1C7BC2", /* cyan    */
  [7] = "#88b5d8", /* white   */

  /* 8 bright colors */
  [8]  = "#5f7e97",  /* black   */
  [9]  = "#195D9E",  /* red     */
  [10] = "#19629A", /* green   */
  [11] = "#21649A", /* yellow  */
  [12] = "#1B75B6", /* blue    */
  [13] = "#2175B5", /* magenta */
  [14] = "#1C7BC2", /* cyan    */
  [15] = "#88b5d8", /* white   */

  /* special colors */
  [256] = "#030912", /* background */
  [257] = "#88b5d8", /* foreground */
  [258] = "#88b5d8",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
