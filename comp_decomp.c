#include <stdlib.h>
#include <stdio.h>
#include <gmodule.h>

GArray * decompose(int x, GArray * n) {
  GArray * a = g_array_new(FALSE, FALSE, sizeof(gint));
  for(int i = 0; i < n->len; i++){
    g_array_insert_val(a, i, x % g_array_index(x, gint, i));
  }
}


int main (void) {
  GArray * n = g_array_new(FALSE, FALSE, sizeof(gint));
  int n_[3] = {2,3,5};
  g_array_apend_vals(n, n_, 3);
  GArray * a = decompose(7, n);
}
