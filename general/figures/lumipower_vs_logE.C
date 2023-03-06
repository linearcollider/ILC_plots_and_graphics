void lumipower_vs_logE()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Mar 30 11:52:58 2022) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "",0,45,1024,768);
   gStyle->SetOptStat(0);
   c1->Range(-1.575113,-3.740577,0.8967163,0.6157567);
   c1->SetFillColor(10);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLogx();
   c1->SetLogy();
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.17);
   c1->SetRightMargin(0.08);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.17);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx33[4] = {
   0.0912,
   0.161,
   0.24,
   0.365};
   Double_t Graph0_fy33[4] = {
   1.544402,
   0.1444043,
   0.05319149,
   0.007344633};
   TGraph *graph = new TGraph(4,Graph0_fx33,Graph0_fy33);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(5);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph033 = new TH1F("Graph_Graph033","",100,0.07,5);
   Graph_Graph033->SetMinimum(0.001);
   Graph_Graph033->SetMaximum(2.5);
   Graph_Graph033->SetDirectory(0);
   Graph_Graph033->SetStats(0);
   Graph_Graph033->SetLineWidth(2);
   Graph_Graph033->SetMarkerStyle(20);
   Graph_Graph033->SetMarkerSize(0.7);
   Graph_Graph033->GetXaxis()->SetTitle("Center-of-Mass Energy [TeV]");
   Graph_Graph033->GetXaxis()->SetRange(1,100);
   Graph_Graph033->GetXaxis()->SetNdivisions(506);
   Graph_Graph033->GetXaxis()->SetLabelFont(42);
   Graph_Graph033->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph033->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph033->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph033->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph033->GetXaxis()->SetTitleFont(42);
   Graph_Graph033->GetYaxis()->SetTitle("Lumi [10^{34} s^{-1} cm^{-2}] / Power [MW]");
   Graph_Graph033->GetYaxis()->SetNdivisions(506);
   Graph_Graph033->GetYaxis()->SetLabelFont(42);
   Graph_Graph033->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph033->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph033->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph033->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph033->GetYaxis()->SetTitleFont(42);
   Graph_Graph033->GetZaxis()->SetLabelFont(42);
   Graph_Graph033->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph033->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph033->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph033->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph033->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph033);
   
   graph->Draw("alp");
   
   Double_t Graph1_fx34[4] = {
   0.0912,
   0.16,
   0.24,
   0.36};
   Double_t Graph1_fy34[4] = {
   0.3833333,
   0.05333333,
   0.01666667,
   0.001666667};
   graph = new TGraph(4,Graph1_fx34,Graph1_fy34);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph134 = new TH1F("Graph_Graph134","Graph",100,0.06432,0.38688);
   Graph_Graph134->SetMinimum(0.0015);
   Graph_Graph134->SetMaximum(0.4215);
   Graph_Graph134->SetDirectory(0);
   Graph_Graph134->SetStats(0);
   Graph_Graph134->SetLineWidth(2);
   Graph_Graph134->SetMarkerStyle(20);
   Graph_Graph134->SetMarkerSize(0.7);
   Graph_Graph134->GetXaxis()->SetNdivisions(506);
   Graph_Graph134->GetXaxis()->SetLabelFont(42);
   Graph_Graph134->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph134->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph134->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph134->GetXaxis()->SetTitleOffset(1);
   Graph_Graph134->GetXaxis()->SetTitleFont(42);
   Graph_Graph134->GetYaxis()->SetNdivisions(506);
   Graph_Graph134->GetYaxis()->SetLabelFont(42);
   Graph_Graph134->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph134->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph134->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph134->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph134->GetYaxis()->SetTitleFont(42);
   Graph_Graph134->GetZaxis()->SetLabelFont(42);
   Graph_Graph134->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph134->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph134->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph134->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph134->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph134);
   
   graph->Draw("lp");
   
   Double_t Graph2_fx35[4] = {
   0.0912,
   0.16,
   0.24,
   0.36};
   Double_t Graph2_fy35[4] = {
   0.5485714,
   0.076,
   0.02371429,
   0.002285714};
   graph = new TGraph(4,Graph2_fx35,Graph2_fy35);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph235 = new TH1F("Graph_Graph235","Graph",100,0.06432,0.38688);
   Graph_Graph235->SetMinimum(0.002057143);
   Graph_Graph235->SetMaximum(0.6032);
   Graph_Graph235->SetDirectory(0);
   Graph_Graph235->SetStats(0);
   Graph_Graph235->SetLineWidth(2);
   Graph_Graph235->SetMarkerStyle(20);
   Graph_Graph235->SetMarkerSize(0.7);
   Graph_Graph235->GetXaxis()->SetNdivisions(506);
   Graph_Graph235->GetXaxis()->SetLabelFont(42);
   Graph_Graph235->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph235->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph235->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph235->GetXaxis()->SetTitleOffset(1);
   Graph_Graph235->GetXaxis()->SetTitleFont(42);
   Graph_Graph235->GetYaxis()->SetNdivisions(506);
   Graph_Graph235->GetYaxis()->SetLabelFont(42);
   Graph_Graph235->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph235->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph235->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph235->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph235->GetYaxis()->SetTitleFont(42);
   Graph_Graph235->GetZaxis()->SetLabelFont(42);
   Graph_Graph235->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph235->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph235->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph235->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph235->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph235);
   
   graph->Draw("lp");
   
   Double_t Graph3_fx36[4] = {
   0.0912,
   0.38,
   1.5,
   3};
   Double_t Graph3_fy36[4] = {
   0.0036,
   0.02090909,
   0.01016484,
   0.01001698};
   graph = new TGraph(4,Graph3_fx36,Graph3_fy36);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(8);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(8);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph336 = new TH1F("Graph_Graph336","Graph",100,0.08208,3.29088);
   Graph_Graph336->SetMinimum(0.001869091);
   Graph_Graph336->SetMaximum(0.02264);
   Graph_Graph336->SetDirectory(0);
   Graph_Graph336->SetStats(0);
   Graph_Graph336->SetLineWidth(2);
   Graph_Graph336->SetMarkerStyle(20);
   Graph_Graph336->SetMarkerSize(0.7);
   Graph_Graph336->GetXaxis()->SetNdivisions(506);
   Graph_Graph336->GetXaxis()->SetLabelFont(42);
   Graph_Graph336->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph336->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph336->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph336->GetXaxis()->SetTitleOffset(1);
   Graph_Graph336->GetXaxis()->SetTitleFont(42);
   Graph_Graph336->GetYaxis()->SetNdivisions(506);
   Graph_Graph336->GetYaxis()->SetLabelFont(42);
   Graph_Graph336->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph336->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph336->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph336->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph336->GetYaxis()->SetTitleFont(42);
   Graph_Graph336->GetZaxis()->SetLabelFont(42);
   Graph_Graph336->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph336->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph336->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph336->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph336->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph336);
   
   graph->Draw("lp");
   
   Double_t Graph4_fx37[4] = {
   0.0912,
   0.38,
   1.5,
   3};
   Double_t Graph4_fy37[4] = {
   0.0036,
   0.02705882,
   0.01016484,
   0.01001698};
   graph = new TGraph(4,Graph4_fx37,Graph4_fy37);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(8);
   graph->SetLineStyle(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(8);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph437 = new TH1F("Graph_Graph437","Graph",100,0.08208,3.29088);
   Graph_Graph437->SetMinimum(0.001254118);
   Graph_Graph437->SetMaximum(0.02940471);
   Graph_Graph437->SetDirectory(0);
   Graph_Graph437->SetStats(0);
   Graph_Graph437->SetLineWidth(2);
   Graph_Graph437->SetMarkerStyle(20);
   Graph_Graph437->SetMarkerSize(0.7);
   Graph_Graph437->GetXaxis()->SetNdivisions(506);
   Graph_Graph437->GetXaxis()->SetLabelFont(42);
   Graph_Graph437->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph437->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph437->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph437->GetXaxis()->SetTitleOffset(1);
   Graph_Graph437->GetXaxis()->SetTitleFont(42);
   Graph_Graph437->GetYaxis()->SetNdivisions(506);
   Graph_Graph437->GetYaxis()->SetLabelFont(42);
   Graph_Graph437->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph437->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph437->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph437->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph437->GetYaxis()->SetTitleFont(42);
   Graph_Graph437->GetZaxis()->SetLabelFont(42);
   Graph_Graph437->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph437->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph437->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph437->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph437->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph437);
   
   graph->Draw("lp");
   
   Double_t Graph5_fx38[4] = {
   0.0912,
   0.25,
   0.5,
   1};
   Double_t Graph5_fy38[4] = {
   0.002234043,
   0.01216216,
   0.01040462,
   0.012};
   graph = new TGraph(4,Graph5_fx38,Graph5_fy38);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph538 = new TH1F("Graph_Graph538","Graph",100,0.00032,1.09088);
   Graph_Graph538->SetMinimum(0.001241231);
   Graph_Graph538->SetMaximum(0.01315497);
   Graph_Graph538->SetDirectory(0);
   Graph_Graph538->SetStats(0);
   Graph_Graph538->SetLineWidth(2);
   Graph_Graph538->SetMarkerStyle(20);
   Graph_Graph538->SetMarkerSize(0.7);
   Graph_Graph538->GetXaxis()->SetNdivisions(506);
   Graph_Graph538->GetXaxis()->SetLabelFont(42);
   Graph_Graph538->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph538->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph538->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph538->GetXaxis()->SetTitleOffset(1);
   Graph_Graph538->GetXaxis()->SetTitleFont(42);
   Graph_Graph538->GetYaxis()->SetNdivisions(506);
   Graph_Graph538->GetYaxis()->SetLabelFont(42);
   Graph_Graph538->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph538->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph538->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph538->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph538->GetYaxis()->SetTitleFont(42);
   Graph_Graph538->GetZaxis()->SetLabelFont(42);
   Graph_Graph538->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph538->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph538->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph538->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph538->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph538);
   
   graph->Draw("lp");
   
   Double_t Graph6_fx39[4] = {
   0.0912,
   0.25,
   0.5,
   1};
   Double_t Graph6_fy39[4] = {
   0.003565217,
   0.01956522,
   0.01674419,
   0.017};
   graph = new TGraph(4,Graph6_fx39,Graph6_fy39);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineStyle(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph639 = new TH1F("Graph_Graph639","Graph",100,0.00032,1.09088);
   Graph_Graph639->SetMinimum(0.001965217);
   Graph_Graph639->SetMaximum(0.02116522);
   Graph_Graph639->SetDirectory(0);
   Graph_Graph639->SetStats(0);
   Graph_Graph639->SetLineWidth(2);
   Graph_Graph639->SetMarkerStyle(20);
   Graph_Graph639->SetMarkerSize(0.7);
   Graph_Graph639->GetXaxis()->SetNdivisions(506);
   Graph_Graph639->GetXaxis()->SetLabelFont(42);
   Graph_Graph639->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph639->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph639->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph639->GetXaxis()->SetTitleOffset(1);
   Graph_Graph639->GetXaxis()->SetTitleFont(42);
   Graph_Graph639->GetYaxis()->SetNdivisions(506);
   Graph_Graph639->GetYaxis()->SetLabelFont(42);
   Graph_Graph639->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph639->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph639->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph639->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph639->GetYaxis()->SetTitleFont(42);
   Graph_Graph639->GetZaxis()->SetLabelFont(42);
   Graph_Graph639->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph639->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph639->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph639->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph639->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph639);
   
   graph->Draw("lp");
   
   Double_t Graph7_fx40[4] = {
   0.0912,
   0.25,
   0.5,
   1};
   Double_t Graph7_fy40[4] = {
   0.003565217,
   0.02727273,
   0.01674419,
   0.017};
   graph = new TGraph(4,Graph7_fx40,Graph7_fy40);
   graph->SetName("Graph7");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineStyle(3);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph740 = new TH1F("Graph_Graph740","Graph",100,0.00032,1.09088);
   Graph_Graph740->SetMinimum(0.001194466);
   Graph_Graph740->SetMaximum(0.02964348);
   Graph_Graph740->SetDirectory(0);
   Graph_Graph740->SetStats(0);
   Graph_Graph740->SetLineWidth(2);
   Graph_Graph740->SetMarkerStyle(20);
   Graph_Graph740->SetMarkerSize(0.7);
   Graph_Graph740->GetXaxis()->SetNdivisions(506);
   Graph_Graph740->GetXaxis()->SetLabelFont(42);
   Graph_Graph740->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph740->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph740->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph740->GetXaxis()->SetTitleOffset(1);
   Graph_Graph740->GetXaxis()->SetTitleFont(42);
   Graph_Graph740->GetYaxis()->SetNdivisions(506);
   Graph_Graph740->GetYaxis()->SetLabelFont(42);
   Graph_Graph740->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph740->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph740->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph740->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph740->GetYaxis()->SetTitleFont(42);
   Graph_Graph740->GetZaxis()->SetLabelFont(42);
   Graph_Graph740->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph740->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph740->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph740->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph740->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph740);
   
   graph->Draw("lp");
   
   TLegend *leg = new TLegend(0.45,0.6,0.89,0.892,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Lumi / AC Power vs Energy of Future e^{+}e^{-} Colliders","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph0","FCCee, 2 IPs [arXiv:2203.08310] ","LP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","CEPC, 2 IPs [arXiv:2203.09451]","LP");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph2","CEPC, 2 IPs, lumi up, power priv. com.]","LP");
   entry->SetLineColor(4);
   entry->SetLineStyle(2);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph5","ILC baseline [arXiv:2203.07622]","LP");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph6","ILC luminosity upgrade [dito]","LP");
   entry->SetLineColor(2);
   entry->SetLineStyle(2);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph7","ILC250 10 Hz operation [dito]","LP");
   entry->SetLineColor(2);
   entry->SetLineStyle(3);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph3","CLIC baseline [arXiv:2203.09186]","LP");
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph4","CLIC luminosity upgrade [dito]","LP");
   entry->SetLineColor(8);
   entry->SetLineStyle(2);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
