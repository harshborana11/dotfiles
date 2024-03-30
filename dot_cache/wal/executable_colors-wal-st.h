const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0F1827", /* black   */
  [1] = "#234083", /* red     */
  [2] = "#2C4B8C", /* green   */
  [3] = "#375EA7", /* yellow  */
  [4] = "#59669B", /* blue    */
  [5] = "#8B79A4", /* magenta */
  [6] = "#7189BC", /* cyan    */
  [7] = "#c6bece", /* white   */

  /* 8 bright colors */
  [8]  = "#8a8590",  /* black   */
  [9]  = "#234083",  /* red     */
  [10] = "#2C4B8C", /* green   */
  [11] = "#375EA7", /* yellow  */
  [12] = "#59669B", /* blue    */
  [13] = "#8B79A4", /* magenta */
  [14] = "#7189BC", /* cyan    */
  [15] = "#c6bece", /* white   */

  /* special colors */
  [256] = "#0F1827", /* background */
  [257] = "#c6bece", /* foreground */
  [258] = "#c6bece",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
