<xs:element name="alumno">
<xs:complexType>
    <xs:sequence>
      <xs:element name="Nombre" type="xs:string"/>
      <xs:element name="Apellido" type="xs:string"/>
      <xs:element name="DNI" type="xs:string" xs restriction value= “[0-9]{8}[A-	Z]” />
      <xs:element name="Direccion" type="xs:string"/>
      <xs:element name="Fechadenacimiento" type="xs:date" xs restriction 	value= “[0-9]{4}[0-9]{2}[0-9]{2}” />
    </xs:sequence>
  </xs:complexType>
</xs:element>