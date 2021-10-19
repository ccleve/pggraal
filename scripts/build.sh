GRAALPATH=/Library/Java/JavaVirtualMachines/graalvm-ce-java11-21.0.0.2/Contents/Home/bin

mvn clean package
$GRAALPATH/native-image -jar target/pggraal-0.1.jar pggraal --shared