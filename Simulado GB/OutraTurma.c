#include <stdio.h>

int main(){
    char enunciados[113][113] = {{"CYNVGAPESXGIQWAVQBBZAWOUSWMBIHNLGDGMDYQVXWFOUFLKJMLJKCGCYUFGCTSKYAYBAQZAOGQJMBVVQJGALMFLJMRNHLXFOXJQNKQBQGMCKIZAC"},
{"GREUJPDYIQFWPNMMWCZITDYBPDLZCLSKQYFBPKZYDFWSSIHQKIAFLAHDDUCIIXSYVZZLMBLPGHJARQSBZSJMSSRYMWGUTASOCUBOVMDDVMFMFXQRR"},
{"ZUITMJFIRABSURUQVKNHPQFDVRIUJQLKLXDXIJHALKUFBQYYALGPENSZEDWOTJYEGEDRNMRYWNFADDYDPGUTTMUYPQOLAORISVBHHUHGHNGKSEIJN"},
{"JCGEZGNRWATLSEFNFNWCWCJJIWCPLLCVQKTRRIINJEABIGQPVORRRDDBZHSKSWHKHABYLMNUSOXAWPRTDLMWOPANYUZTRHDAJHAUVNQNDPPZEEUKR"},
{"HIHY UXFUQYDVAMCAHZNXMTNDSTMPDDWMNWYHTDDLDGHDTLFCLVZZOODIIPXNUVZHSARLDWZJFGOARUCEPDGDSLNCCLPWGPGYRZMUXLFCTUE QGTF"},
{"KZKEKUGMKVKRMSRDTFARSHVLBAARITYUSIYEIGSSCCLQXFWQKWHFDDQHFSANLBIDLIJTPBOTGZLDGHTRFDYJIOSNHUAUVKAJTJCKNSDTUOYUWRTDU"},
{"ROCIGRMDULAELJZVOJKGODADBBBUUERMTVUBNNGHYHNKQNHEYRLNWNSZQVTLBMZWIVAXIGGINTUEIBKJUVWSLQRBLNOMZPLJMLGWRMFFIZMSDVBZR"},
{"XSENLFAAWPALAJYLQWEEBJODUHIQIHJIBNVNUYNQNNEPXECPAGVEQKHMRPCZYNHACFNXFAPUQTJPXLGARBEJNNWEEAGCQPCSWRRBUHVKC BARHCLI"},
{"GUWTSCXV BLAEDWXVATEVFGCGITNKEYQBWLTYKQJMBJSFHPCHLGFQMHXVCMHJKAMILHHWYSIZDCGKRIUCQZVFIUCMGJXTJJBXRKTPCDQPFXUYHODY"},
{"PYFZUHLAQ VCUXZLHUCMXTTESPEZDHZUHEVBLJEEUZGOYHCIBGUABPETFITKSSHBZCFKLLQHKYWJFARGGNGIEMDLXWYPRFSQJZCXKVGRTEGZEZHNM"},
{"QXSCAEBZEQFLLKWKOTVJASFEYELXNALDXDIZJJANCSAPEXZTQWCSOHZONMNDMAIJESKPCLFGFFVKCWDVVHNLROAGAPJMQSXWKKLOVQOAYRKAQPVLX"},
{"LWQZYWCQGOGUOCMYPBVIXXGRIIHZEUYRSOQRLSHTJPTZTFXIISSGPAZZJGBPAZGSQYLBTUUCLPDEWAPFUHNLKMNTSQKUPQOFOCIJWCLIVOOSQDXMN"},
{"KAXWNSQDCMUUNCKEMUBRHLMYBGQFDDUPDTNSLDXPPRLSVVWIPZBZMNXOWNTZSPRVIEPVIMKZGVTBSQLIRMJECGSYVNZOCQLKVBHFERGVOAZGSKQJZ"},
{"ZNBHFBDSATWRECOFPTXIBSWBTFTEXDDZQGGYHLSHEPAJZOQPJPXLIWOBBIHANMZFUIFBTYLAPLLOCDFNTDADZPECZOCMCERXMXYDXLHOZSCBWKQRN"},
{"RUOIASHOUTRAMOALOWIADWZYBCWLUNALHOTHIAYCVRFKHTVXPGXVEYTFCRSXGUKNKGWSGWXENCOWVJUNRTIWSDDWUYVASGPDMNIUMUABYOYWASJTL"},
{"TPFWTCSRXULFLQTOOQMKQOJHMHJEQCPJSVFNZZEYTREEIZEWPRIIFRPTYAXQCOZWJGJKFPJAHPEROLNECXOJPDCPDBGHRHEDQMNXHWYQLEHCPWITT"},
{"WCKZGCEJINBRREJJ HSQHIDLRFBNNUIJZTKHVQRFEUYVYIGRRYJYINLZSOMILXTKQETNUMSYGSWGAEYTFHTNWFNRVBZGYSSOEMBVYVVHOTNQANMFX"},
{"FSTMFKIHLQFGLWGZZQZVZGLSUDSHRZGXSALXMVGYMMGXIMWJQVEPERJYXEHODONVQZVCWBCIPIHZVFJLBPCHJLFGPOWTEMQNNLZJNBSEMBEJHNWKE"},
{"YRNLYTBMSWTEMPRAOAUSUTEYXPFMLRRLKEWIAZWUXRYMHRMVTDNOWTOWKVKXMBIYIHGKIEEGWCUDVGAOLQCHLQFWLQTZRETBLFLTMPBITVNODNDOF"},
{"HYRADNNTGNNMMOXUATGEWQLSDBXSEOYMMPOREBLMQAZDOYZQRFKOXXICYFUDTURHLFZPIMEZMDCABDTVIDLFATHYADDWAODLDCDMOHLCMPDPUYMCB"},
{"XJDQSDRVHNVFSJLXOZNX QJDTAXTNZUKKZDCCWZLLVRDGEAUDORPECSZCPSRQOEANHCPFBDQYWTGAWADMTSSVMRABLTT XTQGXHLAKBBGXHGVKLHD"},
{"FZBRSDUFWNGWIWCHFQKQTRWQUFLEQSKWTNPLQKQMZYKKWPTCFDSYQQRLVEROXDMSQBEGNWVPVFZRUUTBYNAOETBBXTRQWDPPHVVURSLOAMIWHBYFR"},
{"AVXTXYQQQNOVEDCZBZSTKHEZPSGSQNJSIGLFHDXZQOUWTZVUYOQKXNJMFPGXCSPLYASHGSGWGDVBCQYAGQMDDWRJLYUQQYDQAVYGPGFVLAZNSXPZN"},
{"CCQYUBLUKBKKEAMCAVRJCPUCQKWNBVAFASFWWRQIUCSBCGDFBWODNIHDUESWBSBDNHZJYRRUTJVYRADTZTWMDGSYKEUNFVRSCSBCKUXFFUFWVKPUD"},
{"OIHUCFGPZTUWKOBDRFPLEUQZEMWMEQQSAZODEUUFPODAEEDVKSIQOYPQMLDSDVMEUAJAWDHMTKMZRRUDLCTBCLSQ XJCUVIQYTQUYZIRLWSCPMHAQ"},
{"DEUOYKMVVQRRYHRRZNPYWIJUABKOVMGAQAOONDLITCBSLULKIDIGNUAQIMGFZNGRPWGEZTNVYQPJNAUXFEDTYFLRSROTEWKWSSAUMPPKIETVGPSOU"},
{"XJSCUBWLRPSNCQHUQBGIQSQWMNEDHTXEESIYVFLMWFBYVITOKBWCUOBIDGLKBJOFDYFYDQMAWNATXTJHXHMRVNEAVKKWVADYZIWEYIEWXHSVABEXJ"},
{"QQGDPJYCTWXWZWVHUZIFGEENYZP EPLWHTCXCCBYZYUAWRITSSYYWENXEFXKUKGBFKAKNBIOCEOAVYTPQTOPYCMEIJQEVWIAJIMWMUKQAAQXZMNPH"},
{"DEHGQNPBDTYCBBLMNJAKTQKVIKUW MECQNIJBZMGTNIWOTKDEKNXCATLMPHJBNLUDVFEVTMQGVMWQZAVJNUOEPZBFIMIWZCZVJFSDRILOWIFVICHX"},
{"WVPMWQTEFBCGGBBRIVUCDGQAOVVYZPVWZKKVDDCKGEQOGUGQPCSTKJTAGQYGXWEWIOULTWXZAOQIIWZXATQBCLLLEMRBIVZQLVEERBFUPVCZTDXUX"},
{"PHBDSMHEFKMCJFNFLTYMZSEUXDQACMOSTBVLPESXOGZZLPGYIFLHZREWWWZZIARBDOOTSGSINRHAIQZRXMEWFEVBAWAIWTLAHAVBINLXGVAPLBGIN"},
{"IGSNDVPZWAYRNYBNTCYIOVOJVDWWLELRMDJQZARXCPOQNPFIUDQKZHVUMRTYXEULKFBLHVIKKYAAQHIKL WKKRGWKZWJGQUQXYBFTLPDJRDZYOLJR"},
{"JVBAEXMFWVLOSBMQERLPIOBZUCZKOLBX EAMDOUZKFOEJAUPTHFDVIERKDBAQEAZIALMOHLANBGYDCNW1UBHCFYPJAPZEPAPROBIVOIKQRITTYSDU"},
{"TKZZIOKKDLRVMGMAJUVXFGNWQJPODSLWE XNYHZDVSYHYLHHFEHMMWIDFYTISEHXOEMOOLSJESSEDBO FVXSRIXZISJAXQZNXLENZYYFQQLWRZJYW"},
{"ISOQPPYKYBJRAWQOCFNADUTTFRMFAKDKFRPWIBGJEPAFOSTQXITCCOXJFJQHVURANUXWYDFCVHHJZCPYKWAOKXYRIOYDKSGYMFUKKZNFIWOHBSHNO"},
{"HCZGCQQSRTDJBBVGXIRYXYGVPPWHWKVFOWLANDKGYPPAQMIPWBNTATPPINYGXTLNQYFFBQLAFCCYOOPLODGOYXFJLDPKYDAQDFXHVKJDMLDDXSQLV"},
{"WBWWIFJNUTOZVEDBEMYOVBDIGIFZYTWWWSSFRDUUZITUPYVVKULHXOPEYXDYQBVOUPVTTQNSAJOPNKKWEYDDMVHNSMLKOIYKYUDTMTNMEBENNQLTO"},
{"RXDMEQGRDQHMQRMMUHYPWLTZRJNHUGYLFBZKTADWVKKMDWYZDZPZMIZDTOMOWKBCNBOGGTFEDPSTMSHRRWTDHUIAIVQEHUIVXWDDPIJUYBCMUKFNI"},
{"YRPSZSAWIHECRZBOCHFNQCNUEZQQEDZFWQXYIAMRJAVABXQGEWTWYGQEHGXNMWSIMSGVUDODDLEFKWLOSGNSMDYVMVIYTDIIXPFRUVUXGZERVRHPX"},
{"UJLAIGMFRMBWUJTLOKFJGFRFLIDDSUCOGOOQWCVEQWLNHEYXOGIUNACYKHDEDGTJWJZSOVIETITDYSAOALLNNPLZWREZXZLVKKNYHXFDRYGRSIFSV"},
{"QFIFTIDKOFJNQEXATYIRFLKDTBWBGOXZWHGPRKBFTKUHQUHLSREXEOCXPABYRAXNJFEBPFGGRDPHXXURQZOXNSUFTXDKZCXJHBKXGSFZVVGSUCJMB"},
{"ZJPSGWNDZXFBWOIXAHFSPEOKMIGQUSSTCJNKFCNEZRHVIRUIZBDQHRAVBIMVCERGNGQUJGAOAHGJYCTZEWPNPRJRZVOEBFKOOBKXJKJJRRURUORAM"},
{"GNEAYVZTLFUTQKHTWGCGPNZHIRDYKFKQUQQTLSOZXJOPVZISHMAYAAHIRKIBRUTMLMFYGT FEPVCQFWZSWYUYHERSMSLIOXTCCSIYRPEJKIBSEBMD"},
{"BGBIKTCYNOGBNCFSWPQNFWYPFAJJDVOEBQONJRNWHWA YFMWXELCBKRIMDTPYITCYJPJCPFJBHGBPUZMZKOCUHKGKDXLLQNLCCUEJCOKJWNAQMORX"},
{"CTTMFCYJZJWSWIUBEAKGQXSMKUDXJWWNQRBVTAGVLDPIULLTLVACSUOFQTEZSAPIRQFNAMKERZOEKBXXWZZRVQYMLCNDECNVVTKNFWTWVHCHIBFHD"},
{"GAYWYMKAAPEEDBZWOPBKIZIQBPACWJHDJGBHUNJWDPBGTMEHRHTAGBSJTULPEVUPBYXRLIUQYXYTZCATJTVRXPAQJOHPJCFMCEJNMFGMCEFEJHXUD"},
{"UMAJOQSCXKNBPBDTLTHSZUVDBBOLYJOUXODLGXQFHFHWHK SDZMCVHIYIWJIHXCENHAVFIBONINUUEOYFBCAIMBTLKDSKIXZPPVWXWNKGAFAGTAOW"},
{"DQHRRACEFXONUPFLKDIISUOSZPBVPPTUFAMZCQDINTXJIEU ICBAXSVYHYVYPPVWP VUZACNTBWCGRXQVASUSPVBNSACHXBZEWTFZXSSYRWGITWFU"},
{"PCOGXQUPSYZPZAVYVAZSTRSKOZUJXBFODUVCMRSEPTVRTQROAQILJAXXBTJBVOPACMDWDXCVSXMLPFBIVLVENVEPOPQLFHOQUROZQRUIQIVGPYQKJ"},
{"LRWGXLXODKTNYLJRAIJTFRJPORFMHRVVKSDHFAXLNRYNEJHERRXYKJOAATNKKKFHCIEKLEXAXVPBEWGXPFYBQMBTHQDTBKQFUXRHBOHYJZBPVHPMP"},
{"PNFBRAKHDDIPWQMTHTWWDUHCVZZFQMWFZDIQESAJXKBTANOKGKRLGPNEONLGZHAAMTTSNVCNFDIISXSYJAMSRZWIOJOPQASEVNXLIZYNEGXWFRWPR"},
{"KHLMFTAOHSGJKKHZJSHKSWOYUMGNLVFVESHLLKZUEFEQRNPBHYLAUCZQQFEBCRZIDITQUUKYZQOTDFUMDHLAJNQCUWDZJEHOPDEJXPKZHASLGOXLX"},
{"LLJYELUAQTMVDAMGFXFWHEDKYQSOODMBRVBVGVXWRJTUKFCPDHNMYQWMHOBX PYLMBGSWDQPPMJZTLQWVDLJVHVCYYZSPZFBALVZQOOFAAGTLYSIB"},
{"DRZMPBMPDGFELIFYEGPSWWUWDNKBHSFMKGZBHNQMUVRHEYGKGXECT ZYNLCPFJJRPKSWYJLUGEBKCJWIGAMAANYQYCNELWVAJQZHZKDFOESSOQCUR"},
{"OWTCXJCZYGLXENGUMPVYSCMYWGONILGXHZBGLDILKVIQIQMVHJVZLKDIQOOBZDYJEZPREXDQSNGDGUYNDVNRFNZWDWXDBXMFYBXCBCTTPBWVYWJBS"},
{"YUZNTXQRWTSTFATJXYKZTFQWEMUCXYUXSWKOTAHQWCLDCFMBDYCYGSUEGRMFPJCJFMXYPFOLHAOLHDMMBOKHIGTRXGWMPZWWNVUCCLNJNEWUHIGKY"},
{"CRIE  UM PROGRAMA QUE LEIA 100 NUMEROS DOUBLE LIDOS PELO  TECLADO E IMPRIME ESTES  NUMEROS  DE TRAS PARA FRENTE "},
{"THPDMKMQUVTXVHRAOFKVYTDYDEGWZKYURNYEAKUUFPRDZKDPPNLQIQO U JVEHQYXOCXAYTGPMLOWOENDPDLHSZBOIZVSRTRHXQHVLNMXYBVOHITY"},
{"OFFIGIWQJTKAMBHJTPGEETDFWYTDJPDXUKFCSDSCXDELGMVABBGHUKPQIIITXAQTKXVFDPJASNLBZIBCMHMGRYZCIWVHXOAJNXOQNXSHLGIMOJRAT"},
{"DJMDKOMIMVHCYRPVFIKFASSGAEXMXZFAIREUISDWPKYNBPJJXVQANAIOOFANFHOPYUKIONGEZERBWCMVYEVLMGBCLBQQIFIJZSROFYSEELHCOVAMZ"},
{"XZNDBQPEGHNNPYPHRFORXVYKEAYAAMBAMPDPHSTPCIDRGSBYXRRWRPGTSHVSTYSHNYYUQSKSCPMJHPJGIAEXQKSITNCPLXYBVXXNRJITYWEHLPPTQ"},
{"TQIGKSBXWQLVPOSONGFXQAXMFHZUYSMULWCVODVNUIILYBBLJIKAIKNPTMMTG NRVPPLTMYPWHCUKDHTLUUVGHLZTZSZXITUXKISWGJSPLOZQVUDR"},
{"QBXXMWSLRUKZNHYZPRVXAPNODOGALKUBLRZZQTMHNYICFGBWZYMCNJQSXWTIINEVGLWWGKFUJNYQWANVYJXOSPGPMBAWQMUXZQVFBBBKOACKCRICA"},
{"FQSVXKJYKHRYBOXSJETMIFBIJNMBVOBDFUYEEJEQQVOSJNKVTEHBMKLVAXYVMAA WAXAJBQAXGUITEFMLPQZBBWBBVXPVZIRAHTJILLHRFSMLZAYO"},
{"SXQUURVRQKOQUHSBABLNNVGUNUGOUEDPEVJAOGRHSFZOMRPOTCBHXJEMDKBZQGOWRZWPFNWZUXNIOEWJHZSEIWTLIUNBABXDBUUIJTIEQXMFCLQLK"},
{"IRVFKGPGTQGXQLYKGIVZSZRQOWUZMFLXWGEJPTPKMYHCJHMRSJQKJICZGWAVDLUCUELJRAVDYDHIMVZEFSPOCTPIQPFVCZXWXIFRJBWJGERUZTZEL"},
{"QUNJJXBAFXDGWZEFHXQKVZSZTMBMLHZDCONNNOQSNTZKUFODCHPXIHZBUAPHJQNLEATSQRKGMLQGQJMUSBUAJVEFXTOGMBUQDVIWOVCAIUIBDUVVW"},
{"RXHMBOLXCSJGMBLJMHXHJZRFJSIEQFCHDLWGZHFDBQLNS YEGXNQWEVGXGMPNQYQBUZOEEHHVVVNUVTATGQRKOXJWLYJBZCEVBIZHSHENETHBMHUS"},
{"AMFQLQMZRVCQZJLARNKJWOYCIFDWPARROWHBMVAFQDVSEJUFWERUVPWFXZBOZSFNQOPFRRKBWITKROSPSJJPAFUZGWPGOUVFKMKTGWVCEOPXEHMZS"},
{"XOUCJULFLTVIOCSDOMJLJNRZCPEJBDBZTWDCSOJDHHN LGBCUMPDZGECVINZNPAJNFLHWNMDGADRIGVCSKHURLWOULPJARSPXGWVFLYLLEETKAXFK"},
{"EZDPXULIJXLDPACXZXCKXPXBUSMWPTIVSMKPGWZRVKIKNYIOVMYTCXUYRIUGBCBVQNMYLMAGYOTLNDZKPZDTYARPKNXOSALKQYJBMDKKRDYGGZRXB"},
{"WTBYMRLAQBURMEHMPKYUULOZLUHKNFNMAPMMGXOYAMPNPYZGLYBHLPHWLOIBVWNVLBITZYR HJOYJQEUQHCBYLXKBFLZBAUOBEHCFBEMKSMVISQYA"},
{"UBYHYKIGXHJXEYBKHDPKHDUCPSMIINKEOKLPXTXUPGUHGVTQALAKOXMEPAOZNYDEKQVHJSCOQYXHTRXTCXDSWRYLSMMHMPNZFIGRAKHBIFKBYHXCG"},
{"CUDUTQOHDXWUNVCVBTYMABUHLYFUXHAZCFTXYJGRJCXWXZTBSTPVULCHLIBIREIVLDUJPBMYDUUDJNGEHXBDIDNUNQEFUMCISXTHYGFDSZIDOOHXL"},
{"IBWOOSBGWIDLNLDKEKKMPNGQWKGMTEACHWSXOVIKEGVTRADYKNMBCTTADAPWEPALLUIBQLNWSLALLSLYHYZJTTMYTBUZQXKDRSGHFTDZGULSMWSVW"},
{"THPMTNHWKGMJSRCMXMSSRRZMETADLWBEDRTYGMUSLIDDBGSYSKSJDRXIKYLXUMCZFXZOZVIKFOQNUIGOUYZXSXFEVSCRHGSODTECOPPVDFBZPJNJJ"},
{"OGDLOIIIMBRSVIVOMZCDQZGXCHMLUVXLCAYSEHAWKUOGCLUONZUDYABDINOELNPPQOHAXJXJDNPFTMWONQRLSUQCKFHVUYKKORLNCKXGZOLYAJONZ"},
{"IBUCRWMYFHVGTFWMSKPEJVEXIEASTPTBSND KSMPBHXVPUHHEYMPTQOCUQWPGPQADWOPOBGPKEMZYOJEUXTQPHULYQBGHRIKPXBDAIVMOHOMFXQAW"},
{"LQLUMWUCZCJTLWIKZMKHHYVQMJWJBYHMQS CRDGQGRJTNSDPGPWNNUFCDBLHBVVRNETGIZXQRIJGAOSGFUVUQDWVEKCIFYZUCVBMWYEPIPWJFTRKP"},
{"PFFSBBYLFGQDILIDOWZOBPWQNHWIZIYQNAKRGICMRVPZIZEYWFMXWIPJQNURWSJLXTCEBHSUEHTOJZM FYEBGVNYJJPHBYUARZEVGWPMGLARMMWRK"},
{"CVSXKRIVIRWJMYCLFXTDPFJCFAORYIDA XAPQIKZAIIOGKZLKSPZZABEDRXDZCEEZETQOFROPBEYNDJXNAYWDBCITBLSDRZFVSXMAQAPRFNEKZEKB"},
{"EIGGNOBOAVURUZPPYBPODGHKWNXVRHYSRFEETFTVANNVOEKOFBEKHLVDASAUBBSSGWXBDSXFHMAXSMLZPUJZCGCEAFYBIQUOMTRRLQXUCZRUMCTDT"},
{"FCXLHBMMAPWSLKHEDYRUVLYVCTJGOMTVPYHYCVKEKGYWSFCXEURBHQWMLHSZWWVLWEJAZVELDDHXIKUOGOMPEOBPWWQSSNFOTQPSNVESANRLZNZFB"},
{"RVFGYWEUNYOCFDWXUQMRWEUKXFLKGRMYOTGMQMHFMVJRAFOWYAQUGKGDPSPVLDVZXDLPPUUBSDUULKRJMJFETOXKGPHRSDSPIFGYCABUGWOTIHEVS"},
{"LPLZPXFEFYWKSOSYUSAXUWFSMAAWIXOPNCPCZWGEXEQPUJPRBROXNVRCVUYZROQGSHISEQYDXPSRAKKBBYBRRUVQOVRIJIOCPXWVPUYMLTGLFQPGR"},
{"QZMKUDBPWJBGXDYWBVMVUAHPGUUNJCOZECMYHNQEYRKXWKUXGISCIBRPYNOHREJVGXWOKMUKDGHBRBYXLSZUWOLUHZBYDMWLJSZVGTFLANMTQKQEE"},
{"RYALJUSKYSNKQYUIAPQVXBXMNQGXIIEZGEMRBEBZZQLPRFARXQOUSMIHCMHNVLMBPBVQFWRGNDYGKAXHSLDKZNSEABRVMDYDGVWMSNUHSUNDUMMNZ"},
{"SZZFTDHUWCIBDOIYKUSXQBQLO FCHUEBUFHPKOMGTUHYIPYSLRSCSKPJHWNORRSLWZAGPMMKJWITLHOXAIBUSQD MTPDKHQJITPAHEKSCTMNCAMEI"},
{"NYCFEDSXUXJEQSOJKOSQZLSSQHWZUAJHANNESHDOGNSWFHHPVCHWNZQMHMNDOYKPNZTFGXVPKOLRXVJUXQRKSHYBNNEKLQZAQVFYSCPEQBVPYGMVZ"},
{"DHRMHUIUYTHQUHIPOJJQYNJULYZTMUSPDJEKFMEFHLWESGTGPDZOSIPFIPZVLRKPDQZIDGOMRMQMSMUIPTYJBPPKEEFSFRHKIITNOJBIVUUNGQXXM"},
{"VGPLXBRLILTASFKDYZRJCBEWVUEOTBARKPCHRVVZHQBBVNEWOYFRZMPXIULBVNSHCWPVSMXBCYEZOJXCJFTIRJHZFUGAHVIMRZJLLGOPHTQVEOXNV"},
{"TXMEFNJBPLJMVXGWGRJPI WBRTFHSSELRSRYFCAWQLLNIRKQKVFSWDVPWAYPUCCMUUKBYMZOXKCFDOWQJDIHHEYDGWSAAVPWRZXPMZGLJKRPYPFJS"},
{"PRBVPFCOZDOWSLNTKFHJETVVMKVBRGVGZXCREEFDJVADIPYTUIEHBZEPLBSCINLHMNYQTFUCBWHLLFEINLRQKWFYZXCHTNRZCRSVXOZAKGLXOSHBD"},
{"ZUPXZNWZSGMHXNKOFFNSHNFNZDBTMFWLZLIABHZTNLAMZMAGUOABDFQEKUXXZTKAHVAICADRNFDOSFVMVVNZCDDPXBOYWIADVBNZDSQSYVHSBCEWZ"},
{"TXBYDSYGGYCHZICAXCTQUXOQEITGMRHHRJFUDDAKCERDMTDMXKCSHSKMAFUMWCVNNAJSGJCKOTNCPSOOCSIJKSXKZUYYYTVNWXFCGIOWDBBUVRLXK"},
{"TIWOGHNCHLADZPZWUAEETDIUEERXPOHJYEZGNMIWYKZZZAVUDZYWEISINJGEZPPYVOEKBPHBZGAZJXTMYTLDCFNRRVVSLLQOZXTCMADLIFKRCFGBZ"},
{"TEBYTURPPKACCKCB ENFKBQPNHSVPVUIBXJURCJIMLLRWPSBVIHFLXXYGPVWMRGNOPJHSVSGGFZEUSIPCPXNOUNWLJUXABMRSVAMSSVZXUFRMNJOE"},
{"GDUARRLANKCOWTJAUVMOSNMNSFBGQSMWVHWOAJONTRCPMNLGKXVDKJSEOTMFNZDLGCZGLQVHJZYVMJCXIZCSIUZYPLFFKJQSN AAHWHQVGMIPQHAP"},
{"JUZFTXUFFZRQRKRJKDQINJETVOKLXKCIFBNYAJFHLXXCJCNVIEEVNKQKAAXXLZFSCUQEDYMOVLTGOGBYMFVZPLLPLIOYJTQNNJETHEHERAKHJLFVT"},
{"AXILIAZTQXEMOMBXKUEQEIJGURPFYLYZIJMSLLNBLSPZKRWWNCORMXYGQPLPCMQKVEFISSLDMBCWSAUFCKZQIZWAOJPRVHDSMKASDMHPNLOHLKOPV"},
{"PFFODFFMXYIEACQODWTRDKGQYNBLDSGTXLJASQNPOXWSZOGELZVQJDHKSKVWDDRAQCDITSAHPWBQKHXVIUOUYVGQFDOIGHLWKOGDTGMXEONRXMMIH"},
{"CCFXKXFNMNVZYRFOXIUGXTKLJBIVQQCUUJSGHXTVMOQNHYDHIYPFTZQCDBYVTCPOMJWVIQSXGKMQIPXRPMWJNPLSQJPJMHZASWXBOAAWZMMIBLBRZ"},
{"XAPMNHEXZQEGPNANKBDZBAAPOKRALIZLKOZXYEWXUJFLWFBIJEHMGKCVUVVGFWRPNQOLWNKSWRGVWHDHNNWUXAPRVKZAISRVLHGHUSOTJGOIPTRCI"},
{"NWFPLZKXANGTFDENMNHENCOVQWMMNPUDNASZBDYBRGWXKAMWOVCDYQBQONCCEXFSZZTCERDWAAVMCJKSEMWCDZVRMXVTWCLXCEZGXFC HZLJIVCPI"},
{"ATLZOENOAGKCTKEZJLZQPYXRKHBHLQPNKCMYHBOJKZLDLSFUFELUCKNOTPYEFNRRSFSZHGKRHVWSNBPUFCPKMEAGTYMBOGSGLKHUTRNANKTENKYVM"},
{"PFYUHENDTQWZJCMVJHOCWRQIMUWWTTIIAGCHNSPGKLHVPTRACHCZAVJMPHIKAQTAZXKORZUENBZCWSDZCFACAJPSRZCTSXWRXGFQFBUSEOXAOABQH"},
{"BTKNKEAJIBDIXWHDBXLEUFKQCNGCQXMSSWHEAPPKQTSOPZRTXCZTIMLMZRRPQDJKBSQDHGNYBGMQFFLEKNXUZKGYEXPUAZHBTXEBDSZEAN FSKKCX"},
{"JWWUD YCMUDNBGGZNHEHILHVKMQUYSSIRQEWNEYZABOEKUDXEJEMULKEZABYUVILLOHYUGZUJNYTIDSONWAJJKQJMRHHMPSXFCYZIXTTLUNAZFJME"},
{"LYNYNWKHFTTWMSBOSAYQWRDSGAROJESWEFUUEHBJAWGOQHCJKCZIUEACERQPXILBQIVWPYFRUNGLXKWHNVRJZRLFICUGMFJEPHAEFGYCVEPSRLBDI"},
{"SMJEAOUCICQPLVFUVLCDJEZPVTGGVJOPYXBYLVAVZSKMNRHLDJOOPPEKLKQIVGXTFARSXTNWMZJBRSMWBDKSUQCFCUNYANTFNNXLGMJULUYEMRAPP"},
{"NHLDJTIFJIFWBMLOLYXZITLCRRRESGVFOJIZDSHMAMKCBXSOWPQGJBKCUBIMIERYPCXSUEGVTQZWORMMJCSUFCWAEHMONGMCKLVGSDDNUCJKWXAFA"},
{"SEHUXHAEWORECUQORWGUATQEECABAHDSGLPGUPMSGEYIAOWTNENPXGTBIWFLDIDKTUSQKEKSKJCMZBFMFVBDBXGJTLWWUAIPUAHGHSARDDECELPYG"},
{"OHPVTKIPHCRPUOSBUZVXSYAYBGKSRQMGAEDTOLKVQENMSHPOILLALLZOTLGLBVRDZWWNJJLBNANFHFTPQHRDSSSODYZHVSKUOHKZSVBFVQMCVHT"}};

    //COLOQUE ABAIXO O CÓDIGO PARA ENCONTRAR O ENUNCIADO 1

for (int i = 0; i < 113; i++)
{
    for (int j = 0; j < 113; j++)
    {
        if (j == i)
        {
            printf("%c", enunciados[i][j]);
        }
    }
}
printf("\n");
    //COLOQUE ABAIXO O CÓDIGO PARA ENCONTRAR O ENUNCIADO 2

for (int j = 0; j < 113; j++)
    {
        printf("%c", enunciados[56][j]);
    }
printf("\n");

    //COLOQUE ABAIXO O CÓDIGO PARA ENCONTRAR O ENUNCIADO 3
int n = 0, i = 0, j = 112;;

while (n < 133)
{
    printf("%c", enunciados[i][j]);
    i++;
    j--;
    n++;
}
    return 0;
}