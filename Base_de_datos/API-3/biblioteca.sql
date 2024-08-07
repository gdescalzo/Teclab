PGDMP                         {         
   biblioteca    15.3    15.3                0    0    ENCODING    ENCODING        SET client_encoding = 'UTF8';
                      false                       0    0 
   STDSTRINGS 
   STDSTRINGS     (   SET standard_conforming_strings = 'on';
                      false                       0    0 
   SEARCHPATH 
   SEARCHPATH     8   SELECT pg_catalog.set_config('search_path', '', false);
                      false                       1262    16398 
   biblioteca    DATABASE     }   CREATE DATABASE biblioteca WITH TEMPLATE = template0 ENCODING = 'UTF8' LOCALE_PROVIDER = libc LOCALE = 'Spanish_Spain.1252';
    DROP DATABASE biblioteca;
                postgres    false                       0    0    DATABASE biblioteca    COMMENT     U   COMMENT ON DATABASE biblioteca IS 'Base de datos creada para la Universidad PulsAr';
                   postgres    false    3349            �            1259    16451    lectores    TABLE     �   CREATE TABLE public.lectores (
    id integer NOT NULL,
    nombre character varying(100),
    apellido character varying(100),
    email character varying(100),
    nacimiento date
);
    DROP TABLE public.lectores;
       public         heap    postgres    false            �            1259    16450    lectores_id_seq    SEQUENCE     �   CREATE SEQUENCE public.lectores_id_seq
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;
 &   DROP SEQUENCE public.lectores_id_seq;
       public          postgres    false    215                       0    0    lectores_id_seq    SEQUENCE OWNED BY     C   ALTER SEQUENCE public.lectores_id_seq OWNED BY public.lectores.id;
          public          postgres    false    214            �            1259    16464    lectoreslibros    TABLE     i   CREATE TABLE public.lectoreslibros (
    id_lectores integer NOT NULL,
    id_libros integer NOT NULL
);
 "   DROP TABLE public.lectoreslibros;
       public         heap    postgres    false            �            1259    16458    libros    TABLE     �   CREATE TABLE public.libros (
    id integer NOT NULL,
    nombre character varying(100),
    editorial character varying(100),
    autor character varying(100),
    isbn integer
);
    DROP TABLE public.libros;
       public         heap    postgres    false            �            1259    16457    libros_id_seq    SEQUENCE     �   CREATE SEQUENCE public.libros_id_seq
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;
 $   DROP SEQUENCE public.libros_id_seq;
       public          postgres    false    217                       0    0    libros_id_seq    SEQUENCE OWNED BY     ?   ALTER SEQUENCE public.libros_id_seq OWNED BY public.libros.id;
          public          postgres    false    216            �            1259    16479    libros_prestados    VIEW     P  CREATE VIEW public.libros_prestados AS
 SELECT lectores.apellido,
    lectores.nombre,
    libros.nombre AS nombrelibro,
    libros.editorial,
    libros.isbn
   FROM ((public.lectores
     JOIN public.lectoreslibros ON ((lectoreslibros.id_lectores = lectores.id)))
     JOIN public.libros ON ((lectoreslibros.id_libros = libros.id)));
 #   DROP VIEW public.libros_prestados;
       public          postgres    false    217    217    217    217    215    215    215    218    218            r           2604    16454    lectores id    DEFAULT     j   ALTER TABLE ONLY public.lectores ALTER COLUMN id SET DEFAULT nextval('public.lectores_id_seq'::regclass);
 :   ALTER TABLE public.lectores ALTER COLUMN id DROP DEFAULT;
       public          postgres    false    215    214    215            s           2604    16461 	   libros id    DEFAULT     f   ALTER TABLE ONLY public.libros ALTER COLUMN id SET DEFAULT nextval('public.libros_id_seq'::regclass);
 8   ALTER TABLE public.libros ALTER COLUMN id DROP DEFAULT;
       public          postgres    false    216    217    217                      0    16451    lectores 
   TABLE DATA           K   COPY public.lectores (id, nombre, apellido, email, nacimiento) FROM stdin;
    public          postgres    false    215   �                 0    16464    lectoreslibros 
   TABLE DATA           @   COPY public.lectoreslibros (id_lectores, id_libros) FROM stdin;
    public          postgres    false    218   V                 0    16458    libros 
   TABLE DATA           D   COPY public.libros (id, nombre, editorial, autor, isbn) FROM stdin;
    public          postgres    false    217   �                  0    0    lectores_id_seq    SEQUENCE SET     >   SELECT pg_catalog.setval('public.lectores_id_seq', 10, true);
          public          postgres    false    214                       0    0    libros_id_seq    SEQUENCE SET     <   SELECT pg_catalog.setval('public.libros_id_seq', 10, true);
          public          postgres    false    216            u           2606    16456    lectores lectores_pkey 
   CONSTRAINT     T   ALTER TABLE ONLY public.lectores
    ADD CONSTRAINT lectores_pkey PRIMARY KEY (id);
 @   ALTER TABLE ONLY public.lectores DROP CONSTRAINT lectores_pkey;
       public            postgres    false    215            y           2606    16468 "   lectoreslibros lectoreslibros_pkey 
   CONSTRAINT     t   ALTER TABLE ONLY public.lectoreslibros
    ADD CONSTRAINT lectoreslibros_pkey PRIMARY KEY (id_lectores, id_libros);
 L   ALTER TABLE ONLY public.lectoreslibros DROP CONSTRAINT lectoreslibros_pkey;
       public            postgres    false    218    218            w           2606    16463    libros libros_pkey 
   CONSTRAINT     P   ALTER TABLE ONLY public.libros
    ADD CONSTRAINT libros_pkey PRIMARY KEY (id);
 <   ALTER TABLE ONLY public.libros DROP CONSTRAINT libros_pkey;
       public            postgres    false    217            z           2606    16469 (   lectoreslibros lectoreslibros_idlectores    FK CONSTRAINT     �   ALTER TABLE ONLY public.lectoreslibros
    ADD CONSTRAINT lectoreslibros_idlectores FOREIGN KEY (id_lectores) REFERENCES public.lectores(id);
 R   ALTER TABLE ONLY public.lectoreslibros DROP CONSTRAINT lectoreslibros_idlectores;
       public          postgres    false    3189    218    215            {           2606    16474 &   lectoreslibros lectoreslibros_idlibros    FK CONSTRAINT     �   ALTER TABLE ONLY public.lectoreslibros
    ADD CONSTRAINT lectoreslibros_idlibros FOREIGN KEY (id_libros) REFERENCES public.libros(id);
 P   ALTER TABLE ONLY public.lectoreslibros DROP CONSTRAINT lectoreslibros_idlibros;
       public          postgres    false    3191    217    218               \  x�]Q�N�0<��"?��v�>n����ڦVjp�`;���[�
'Ϯv�3�f���m�7�=���3��	���@�W�Ti�0�	��C����Tm%�K/2ޙ���#�s��ZKӊ��@<a�.@�r7�1s����j�4�³M�"�`¹��0M��#�k���Z�.!��Ȏ�K�^�Rib�����R�1���EJ=�fJ�^Z��ԝX�8��`�4g����++F)����X��C$�x
� �O�Qz������W�8L�xu��*��T�X�&�9Ruw�����8�b�s���4gO���s%U#M#���~8�"$c��8^pm��+!��^k!�7����         I   x��� !�7�J��ʅ�����P��e��8�'Qh�|m$��8�QЂ��%�^�}�o���~�~��-         W  x���AN�0E��S���q�PE�H���I2m9v����\�bQ	$����?o\��&r�{9�D�Z�Ў<�w�kW�K4��vPzeL�D��d��S��-��#B���6�����2�����A)�3�7�����҈#���րa�}�ܲ�00���B�4�����ʑ�G��6�y�q�p�H��~{��ED�#ʣÀq�K��6bU�q�Af���i�O:V�'\ƫ�JUU%��ʀO���3N���l�l	�#�t[�G��jL%<�b�x]kU&ĺ4�@������-���H)qN�hU�����Q�����B���1eF+�z%��_���     