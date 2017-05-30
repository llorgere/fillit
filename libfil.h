#ifndef LIBFIL_H
# define LIBFIL_H
# include <stdlib.h>

char	**ft_row_tetra(char *tetra);
int		**ft_coor_tetra(char **tetra);
char	**ft_new_square(int n);
int		ft_check_posi(char **square, int **tetra, int row, int col, int n);
int		ft_tetra_nb_char(char *file);
int		ft_tetra_valid(char *file, int n);
#endif
