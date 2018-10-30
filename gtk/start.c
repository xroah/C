#include <stdio.h>
#include <gtk/gtk.h>

int main(void)
{
    gtk_init(NULL, NULL);
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    // gtk_window_set_title(window, "你好");
    g_signal_connect(window, "destroy", gtk_main_quit, NULL);
    gtk_widget_show(window);
    gtk_main();
    return 0;
}