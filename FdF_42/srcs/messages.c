/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   messages.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 17:32:06 by ghubert           #+#    #+#             */
/*   Updated: 2017/02/13 17:32:16 by ghubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void		display(void)
{
	ft_putstr("\
.  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .\n\
.   :::::   :::::::   :::::::   :::::::  :::::::     :::::::   :::     ::::.\n\
.  :+:     +:+  :+:  +:+   :+:   +:+    :+:  +:+    +:+  :+:  +:+    +:+   .\n\
. +:+     +#+  +:+  +#+   +:+   +#+    +#+ +:+     #+#  +:+  +#+      +#+  .\n\
.+#+#+#  #+#+#+#   #+#   +#+   #+#    #+#    #+#  #+#+#+#+  #+#+#+ #+#+#   .\n\
.  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .\n\
.                                                                          .\n\
.     N   Z-   X+    Z+           A        UP          [ESC]-->EXIT        .\n\
.     U         ^                  R        ^                              .\n\
.     M         |                  R        |                              .\n\
.         Y- <--|--> Y+            R   L <--|--> R      [+]-->Zoom+        .\n\
.     P         |                  O        |           [-]-->Zoom-        .\n\
.     A         v                  W        v                              .\n\
.     D   Z^    X-   Zv            S       DOWN         [>]-->Color+       .\n\
.                                                       [<]-->Color-       .\n\
.     || R O T A T I O N ||        ||    M O V E   ||   [c]-->ResetColor   .\n\
.                                                                          .\n\
.  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .\n\
\n\
Wait...\n\
");
}
