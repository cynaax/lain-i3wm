const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#020109", /* black   */
  [1] = "#645EA8", /* red     */
  [2] = "#9C5EAF", /* green   */
  [3] = "#DF63A8", /* yellow  */
  [4] = "#A754D0", /* blue    */
  [5] = "#E86AD2", /* magenta */
  [6] = "#51A2CA", /* cyan    */
  [7] = "#f0ecc9", /* white   */

  /* 8 bright colors */
  [8]  = "#a8a58c",  /* black   */
  [9]  = "#645EA8",  /* red     */
  [10] = "#9C5EAF", /* green   */
  [11] = "#DF63A8", /* yellow  */
  [12] = "#A754D0", /* blue    */
  [13] = "#E86AD2", /* magenta */
  [14] = "#51A2CA", /* cyan    */
  [15] = "#f0ecc9", /* white   */

  /* special colors */
  [256] = "#020109", /* background */
  [257] = "#f0ecc9", /* foreground */
  [258] = "#f0ecc9",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
