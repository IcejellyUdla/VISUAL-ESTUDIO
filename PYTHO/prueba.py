def calcular_max_modelos(cubos, ruedas):
    # Definimos los requerimientos para cada modelo
    cubos_auto, ruedas_auto = 10, 4
    cubos_avion, ruedas_avion = 15, 2
    
    # Calculamos cuántos autos podemos construir
    autos = min(cubos // cubos_auto, ruedas // ruedas_auto)
    
    # Calculamos cuántos aviones podemos construir
    aviones = min(cubos // cubos_avion, ruedas // ruedas_avion)
    
    # Decidimos cuál conviene construir
    if autos > aviones:
        return f"Conviene construir autos. Se pueden construir {autos} autos."
    elif aviones > autos:
        return f"Conviene construir aviones. Se pueden construir {aviones} aviones."
    elif (autos==aviones)>1:
        return f"Puedes construir la misma cantidad de autos y aviones: {autos} modelos."
    else:
        return f"No se puede construir ningun modelo."

# Solicitar el número de cubos y ruedas al usuario
cubos = int(input("Introduce el número de cubos disponibles: "))
ruedas = int(input("Introduce el número de ruedas disponibles: "))

# Determinar cuál modelo conviene construir
resultado = calcular_max_modelos(cubos, ruedas)
print(resultado)


# Definimos la función para calcular el precio del billete
def calcular_precio_billete(distancia, estancia):
    # Precio por kilómetro
    precio_por_km = 0.19

    # Calcular el precio base del billete (ida y vuelta)
    precio_base = 2 * distancia * precio_por_km

    # Aplicar descuento si corresponde
    if estancia > 10 and (2 * distancia) > 500:
        precio_final = precio_base-(precio_base * 0.2) # Aplicar un descuento del 20%
    else:
        precio_final = precio_base  # Sin descuento

    return precio_final

# Solicitar al usuario la distancia y el número de días de estancia
distancia = float(input("Introduce la distancia entre las dos ciudades (en km): "))
estancia = int(input("Introduce el número de días de estancia en la ciudad destino: "))

# Calcular el precio final
precio_billete = calcular_precio_billete(distancia, estancia)

# Mostrar el precio final
print(f"El precio del billete de ida y vuelta es: ${precio_billete:.2f}")
hola=0
juan=1
def asjasjknas (hola, juan):
    hola=1
    juan=-2
jhon=(hola*juan)
print( jhon )
    