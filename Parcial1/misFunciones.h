typedef struct
{
    int calif;
    int estado;
}S_Calificacion;

typedef struct
{
    char nombre[20];
    int precio;
    int idProducto;
    int cantVendida;
    int stock;
    int estado;
}S_Producto;

typedef struct
{
    char nombre[20];
    char password[10];
    int idUsuario;
    int estado;
    S_Calificacion puntuacion[200];
    S_Producto producto[200];
    int contProducto;
}S_Usuario;

int menuOpcion(void);
void alta_usuario(S_Usuario ficha[],int cant);
void baja_usuario(S_Usuario ficha[]);
void modificar_usuario(S_Usuario ficha[]);

void inicializarArray_usuario(S_Usuario ficha[]);
int obtenerEspacioLibre_usuario(S_Usuario ficha[],int cant);


void publicar_producto(S_Usuario ficha[],int cant);
void cancelar_publicacion(S_Usuario ficha[]);
void modificar_publicacion(S_Usuario ficha[]);
void comprar_producto(S_Usuario ficha[],int cant);

void inicializarArray_producto(S_Usuario ficha[]);
int obtenerEspacioLibre_producto(S_Usuario ficha[],int idU,int cant);

void inicializarArray_calificacion(S_Usuario ficha[]);
int obtenerEspacioLibre_calificacion(S_Usuario ficha[],int cant);


void listar_public_usuario(S_Usuario ficha[]);
void listar_public(S_Usuario ficha[]);
void listar_usuario(S_Usuario ficha[]);

float promedio(S_Usuario ficha[],int i);
